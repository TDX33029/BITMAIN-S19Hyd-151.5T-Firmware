// FUN_0001fa0c @ 0001fa0c  size=72  callers=2
// program: cgminer


char * FUN_0001fa0c(int param_1)

{
  char *pcVar1;
  undefined *puVar2;
  
  if (param_1 == 0) {
    return "http:";
  }
  pcVar1 = "http0:";
  puVar2 = &UNK_0004c860;
  do {
    if (*(int *)(puVar2 + 0xc) == param_1) {
      return pcVar1;
    }
    pcVar1 = *(char **)(puVar2 + 0x10);
    puVar2 = puVar2 + 8;
  } while (pcVar1 != (char *)0x0);
  return "invalid";
}

