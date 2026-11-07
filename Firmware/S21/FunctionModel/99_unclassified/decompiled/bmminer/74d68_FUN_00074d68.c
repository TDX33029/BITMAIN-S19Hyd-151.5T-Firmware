// FUN_00074d68 @ 00074d68  size=76  callers=2
// program: bmminer


char * FUN_00074d68(void)

{
  int iVar1;
  char *pcVar2;
  char local_9;
  
  iVar1 = FUN_00074c9c(&local_9);
  if ((iVar1 == 0) && (local_9 != '\0')) {
    pcVar2 = (char *)&DAT_00945208;
  }
  else {
    pcVar2 = "NOSNGOT0000000000";
  }
  return pcVar2;
}

