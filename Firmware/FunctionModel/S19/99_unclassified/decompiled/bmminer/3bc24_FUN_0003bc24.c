// FUN_0003bc24 @ 0003bc24  size=260  callers=1
// program: bmminer


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0003bc24(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_818;
  char acStack_814 [24];
  undefined4 uStack_7fc;
  undefined4 local_7f8;
  undefined4 uStack_7f4;
  undefined4 uStack_7f0;
  undefined4 uStack_7ec;
  undefined4 local_7e8;
  
  if (4 < DAT_00087bbc) {
    local_818._0_1_ = '[';
    local_818._1_1_ = 'D';
    local_818._2_1_ = 'E';
    local_818._3_1_ = 'B';
    builtin_strncpy(acStack_814,"UG] Send 1-midstate work",0x18);
    uStack_7fc = CONCAT13(uStack_7fc._3_1_,0xa2e);
    FUN_00032218(4,&local_818,0);
  }
  uVar3 = 0;
  memset(&local_818,0,0x34);
  local_818 = CONCAT31(local_818._1_3_,1);
  do {
    iVar1 = FUN_000201d8(uVar3);
    if (iVar1 != 0) {
      while (uVar2 = FUN_0004a83c(), (uVar2 & 1 << (uVar3 & 0xff)) == 0) {
        FUN_00034a5c(1);
      }
      local_818 = CONCAT22(local_818._2_2_,CONCAT11((char)uVar3,(char)local_818)) | 0x8000;
      FUN_00020d70(local_818,acStack_814._0_4_,acStack_814._4_4_,acStack_814._8_4_,
                   acStack_814._12_4_,acStack_814._16_4_,acStack_814._20_4_,uStack_7fc,local_7f8,
                   uStack_7f4,uStack_7f0,uStack_7ec,local_7e8);
      FUN_00034a5c(10);
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 != 4);
  return;
}

