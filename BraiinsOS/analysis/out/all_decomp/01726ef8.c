// FUN_01726ef8 @ 01726ef8 size=612 calls_out=8 calls_in=3
// strings: 

undefined8 FUN_01726ef8(int param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  char *pcVar4;
  byte *pbVar6;
  byte *pbVar5;
  char cVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_1fc [120];
  undefined1 auStack_184 [40];
  undefined1 auStack_15c [40];
  undefined1 auStack_134 [40];
  undefined1 auStack_10c [158];
  char acStack_6e [66];
  int local_2c;
  
  pbVar3 = (byte *)(param_2 + -1);
  pbVar8 = (byte *)(acStack_6e + 2);
  local_2c = DAT_018ddaf8;
  pbVar6 = pbVar8;
  do {
    pbVar5 = pbVar6 + 2;
    pbVar3 = pbVar3 + 1;
    bVar1 = *pbVar3;
    *pbVar6 = bVar1 & 0xf;
    pbVar6[1] = bVar1 >> 4;
    pbVar6 = pbVar5;
  } while (pbVar5 != (byte *)&local_2c);
  pcVar4 = acStack_6e + 1;
  cVar7 = '\0';
  do {
    pcVar4 = pcVar4 + 1;
    cVar2 = cVar7 + *pcVar4;
    bVar1 = cVar2 + 8;
    cVar7 = (char)bVar1 >> 4;
    *pcVar4 = cVar2 - (bVar1 & 0xf0);
  } while (acStack_6e + 0x40 != pcVar4);
  iVar10 = 1 - (int)pbVar8;
  acStack_6e[0x41] = cVar7 + acStack_6e[0x41];
  FUN_016dd606(param_1,0,0x28);
  FUN_016dd606(param_1 + 0x28,0,0x28);
  *(undefined4 *)(param_1 + 0x28) = 1;
  FUN_016dd606(param_1 + 0x50,0,0x28);
  *(undefined4 *)(param_1 + 0x50) = 1;
  FUN_016dd606(param_1 + 0x78,0,0x28);
  do {
    pbVar3 = pbVar8 + iVar10;
    pbVar6 = pbVar8 + 1;
    pbVar8 = pbVar8 + 2;
    FUN_0170dd94(auStack_1fc,(int)pbVar3 >> 1,(int)(char)*pbVar6);
    FUN_0170d3f8(auStack_10c,param_1,auStack_1fc);
    FUN_01725f7c(param_1,auStack_10c);
  } while (pbVar8 != (byte *)&local_2c);
  FUN_016dd52c(auStack_184,param_1,0x28);
  FUN_016dd52c(auStack_15c,param_1 + 0x28,0x28);
  FUN_016dd52c(auStack_134,param_1 + 0x50,0x28);
  FUN_0170d2b8(auStack_10c,auStack_184);
  FUN_01725c00(auStack_184,auStack_10c);
  FUN_0170d2b8(auStack_10c,auStack_184);
  FUN_01725c00(auStack_184,auStack_10c);
  FUN_0170d2b8(auStack_10c,auStack_184);
  FUN_01725c00(auStack_184,auStack_10c);
  FUN_0170d2b8(auStack_10c,auStack_184);
  FUN_01725f7c(param_1,auStack_10c);
  iVar10 = 2;
  do {
    iVar9 = iVar10 + 2;
    FUN_0170dd94(auStack_1fc,iVar10 + -2 >> 1,(int)acStack_6e[iVar10]);
    FUN_0170d3f8(auStack_10c,param_1,auStack_1fc);
    FUN_01725f7c(param_1,auStack_10c);
    iVar10 = iVar9;
  } while (iVar9 != 0x42);
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return 0;
}

