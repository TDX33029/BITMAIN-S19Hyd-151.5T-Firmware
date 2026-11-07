// FUN_00022db0 @ 00022db0  size=284  callers=0
// program: cgminer


byte * FUN_00022db0(char *param_1)

{
  byte bVar1;
  size_t sVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  byte *param0;
  byte *pbVar5;
  char acStack_818 [2052];
  
  if (param_1 == (char *)0x0) {
    puVar4 = malloc(7);
    if (puVar4 == (undefined4 *)0x0) {
      snprintf(acStack_818,0x800,"Failed to malloc null in %s %s():%d","util.c","str_text",0xe54);
      FUN_0001dd98(3,acStack_818,1);
      FUN_0003c34c(1);
    }
    else {
      *puVar4 = 0x6c756e28;
      *(undefined2 *)(puVar4 + 1) = 0x296c;
      *(undefined1 *)((int)puVar4 + 6) = 0;
    }
  }
  sVar2 = strlen(param_1);
  pbVar3 = (byte *)FUN_0001f860(sVar2 * 4 + 5,"util.c","str_text",0xe59);
  pbVar5 = (byte *)(param_1 + -1);
  param0 = pbVar3;
  do {
    while( true ) {
      pbVar5 = pbVar5 + 1;
      bVar1 = *pbVar5;
      if (bVar1 - 0x20 < 0x5f) break;
      sprintf((char *)param0,"0x%02x",(uint)bVar1);
      param0 = param0 + 4;
      if (*pbVar5 == 0) goto LAB_00022e40;
    }
    *param0 = bVar1;
    param0 = param0 + 1;
  } while (*pbVar5 != 0);
LAB_00022e40:
  *param0 = 0;
  return pbVar3;
}

