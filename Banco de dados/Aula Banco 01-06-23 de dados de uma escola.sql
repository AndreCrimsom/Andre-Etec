create table instrutor (
	idinstrutor integer unsigned not null auto_increment,
    nome_instrutor varchar(40) null,
    logadouro varchar(40) null,
    bairro varchar(40) null,
    cidade varchar(40) null,
    estado char (2) null,
    tel_residencial integer null,
    tel_celular integer null,
    email varchar (100),
    primary key (idinstrutor)
);

create table disciplina (
	iddisciplina integer unsigned not null auto_increment,
    instrutor_idinstrutor integer unsigned not null, /*FK*/
    nome_disciplina varchar(40) null,
    primary key (iddisciplina),
    index disciplina_fkindex1(instrutor_idinstrutor)
);


create table curso (
	idcurso integer unsigned not null auto_increment,
    nome_curso varchar(40),
    data_inicio date,
    data_fim date,
    primary key (idcurso)
);

create table turma (
	idturma integer unsigned not null auto_increment,
	instrutor_idinstrutor integer unsigned not null /*FK*/,
	curso_idcurso integer unsigned not null /*FK*/,
	dias_semana char(1) null,
	horario_inicio time null,
	horario_fim time null,
	preço decimal null,
	primary key (idturma),
	index turma_fkindex1 (curso_idcurso),
	index turma_fkindex2 (instrutor_idinstrutor)
);

create table aluno (
	idaluno integer unsigned not null auto_increment,
    turma_idturma integer unsigned not null /*fk*/,
    nome_aluno varchar(20) null,
    logadouro varchar(255) null,
    bairro varchar(40) null,
    cidade varchar(40) null,
    estado char(2),
    tel_residencial integer null,
    tel_celular integer null,
    email varchar(100),
    primary key (idaluno),
    index aluno_fkindex1 (turma_idturma)
);