create table professor (
	idprofessor integer unsigned not null auto_increment,
    nome varchar(40) null,
    primary key(idprofessor)
);

create table disciplina (
	iddisciplina integer unsigned not null auto_increment,
    professor_idprofessor integer unsigned not null,
    nome varchar(40) null,
    primary key(iddisciplina),
    index disciplina_fkindex1(professor_idprofessor)
);

insert into professor (idprofessor, nome) values
(1,'Fabio'),
(2,'Marcus'),
(3,'Arilton'); 

insert into disciplina (iddisciplina, professor_idprofessor, nome) values
(1, 3, 'info'),
(2, 2, 'adm'),
(3, 1, 'logi');