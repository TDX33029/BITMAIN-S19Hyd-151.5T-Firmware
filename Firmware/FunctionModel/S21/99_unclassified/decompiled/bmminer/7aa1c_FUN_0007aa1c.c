// FUN_0007aa1c @ 0007aa1c  size=480  callers=2
// program: bmminer


undefined4 FUN_0007aa1c(uint *param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  size_t sVar2;
  uint uVar3;
  int iVar4;
  
  if ((*param_1 >> (param_1[2] & 0xff) != 0) && (iVar1 = FUN_0007a754(param_1), iVar1 != 0)) {
    return 0xffffffff;
  }
  sVar2 = strlen(param_2);
  uVar3 = FUN_000793c8(param_2,sVar2,DAT_00945394);
  iVar4 = param_1[1] + ((1 << (param_1[2] & 0xff)) - 1U & uVar3) * 8;
  iVar1 = FUN_0007a4b0(param_1,iVar4,param_2,uVar3);
  if (iVar1 == 0) {
    sVar2 = strlen(param_2);
    if (0xffffffe6 < sVar2) {
      return 0xffffffff;
    }
    iVar1 = FUN_0007d8a0(sVar2 + 0x19);
    if (iVar1 == 0) {
      return 0xffffffff;
    }
    *(uint *)(iVar1 + 0x10) = uVar3;
    strncpy((char *)(iVar1 + 0x18),param_2,sVar2 + 1);
    *(undefined4 *)(iVar1 + 0x14) = param_3;
    FUN_0007a2e4(iVar1);
    FUN_0007a2e4(iVar1 + 8);
    FUN_0007a420(param_1,iVar4,iVar1);
    FUN_0007a31c(param_1 + 5,iVar1 + 8);
    *param_1 = *param_1 + 1;
  }
  else {
    FUN_00079360(*(undefined4 *)(iVar1 + 0x14));
    *(undefined4 *)(iVar1 + 0x14) = param_3;
  }
  return 0;
}

