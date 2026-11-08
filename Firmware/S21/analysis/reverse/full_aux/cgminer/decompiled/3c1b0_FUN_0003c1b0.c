// FUN_0003c1b0 @ 0003c1b0  size=408  callers=0
// program: cgminer


int FUN_0003c1b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int local_81c;
  char acStack_818 [2052];
  
  local_81c = FUN_0002d974();
  FUN_0002a654(local_81c,param_2,param_4);
  iVar1 = local_81c;
  *(undefined4 *)(local_81c + 0x4c) = param_3;
  FUN_00028c90(local_81c);
  if (*(int *)(iVar1 + 0xdc) != 0) {
    FUN_0002a76c(&local_81c,"cgminer.c","submit_noffset_nonce",0x23e7);
    FUN_00030ec0(param_1);
    return 0;
  }
  FUN_000314b0(param_1 + 0x24,local_81c);
  if ((DAT_00072dc0 != 0) && (DAT_00072e74 != '\0')) {
    FUN_0002a8b4(local_81c,param_3);
  }
  iVar1 = FUN_0001fe44(local_81c + 0xc0,local_81c + 0xa0);
  if (iVar1 != 0) {
    FUN_0003b884(local_81c);
    return iVar1;
  }
  FUN_0002a76c(&local_81c,"cgminer.c","submit_noffset_nonce",0x23f7);
  if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (5 < DAT_00067848)) {
    snprintf(acStack_818,0x800,"%s %d: Share above target",
             *(char **)(*(int *)(*(int *)(param_1 + 0x24) + 4) + 8),
             *(int *)(*(int *)(param_1 + 0x24) + 8));
    FUN_0001dd98(6,acStack_818,0);
  }
  return 1;
}

