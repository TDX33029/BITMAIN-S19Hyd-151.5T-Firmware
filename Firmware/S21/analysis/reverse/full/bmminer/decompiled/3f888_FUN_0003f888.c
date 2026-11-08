// FUN_0003f888 @ 0003f888  size=828  callers=0
// program: bmminer


/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_0003f888(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_r1;
  int iVar4;
  int param3;
  int iVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  char acStack_128 [260];
  
  memset(acStack_128,0,0x100);
  if (DAT_000c8b44 == 0) {
    DAT_000c8b44 = FUN_000856dc("bmminer_tuning");
  }
  FUN_000875a0(DAT_000c8b44,"thread.c",8,"_tuning_freq_dump_nonce_info",0x1c,0x637,0x14,
               "\n current freq: %d\n",param_1);
  if (DAT_000c8b44 == 0) {
    DAT_000c8b44 = FUN_000856dc("bmminer_tuning");
  }
  iVar4 = 0;
  iVar7 = 0;
  FUN_000875a0(DAT_000c8b44,"thread.c",8,"_tuning_freq_dump_nonce_info",0x1c,0x638,0x14,
               "\n dump asic nonce number...\n",param_1);
  do {
    iVar1 = FUN_0002a6f0(iVar7);
    if (iVar1 != 0) {
      if (DAT_000c8b44 == 0) {
        DAT_000c8b44 = FUN_000856dc("bmminer_tuning");
      }
      FUN_000875a0(DAT_000c8b44,"thread.c",8,"_tuning_freq_dump_nonce_info",0x1c,0x63c,0x14,
                   "Chain[%d] nonce:\n",iVar7);
      iVar1 = FUN_0002a514();
      if (0 < iVar1) {
        piVar6 = (int *)(param_2 + -4 + iVar7 * 0x400);
        param3 = 0;
        do {
          piVar6 = piVar6 + 1;
          iVar5 = param3 + 1;
          iVar2 = snprintf(acStack_128 + iVar4,0x100 - iVar4,"asic[%03d]=%-8d",param3,*piVar6);
          uVar3 = FUN_0002a524();
          FUN_000988ec(iVar5,uVar3);
          iVar4 = iVar4 + iVar2;
          if (extraout_r1 == 0) {
            iVar4 = 0;
            if (DAT_000c8b44 == 0) {
              DAT_000c8b44 = FUN_000856dc("bmminer_tuning");
            }
            iVar2 = DAT_000c8b44;
            pcVar8 = acStack_128;
            uVar3 = FUN_00098658(param3,iVar1);
            FUN_000875a0(iVar2,"thread.c",8,"_tuning_freq_dump_nonce_info",0x1c,0x645,0x14,
                         "domain %02d %s",uVar3,pcVar8);
          }
          param3 = iVar5;
        } while (iVar5 != iVar1);
      }
      if (DAT_000c8b44 == 0) {
        DAT_000c8b44 = FUN_000856dc("bmminer_tuning");
      }
      uVar3 = 0;
      iVar1 = iVar7;
      FUN_000875a0(DAT_000c8b44,"thread.c",8,"_tuning_freq_dump_nonce_info",0x1c,0x64a,0x14,
                   "Chain[%d] total nonce number = %d\n",iVar7,0);
      if (DAT_000c8b44 == 0) {
        DAT_000c8b44 = FUN_000856dc("bmminer_tuning");
      }
      FUN_000875a0(DAT_000c8b44,"thread.c",8,"_tuning_freq_dump_nonce_info",0x1c,0x64b,0x14,"\n",
                   iVar1,uVar3);
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 != 4);
  return;
}

