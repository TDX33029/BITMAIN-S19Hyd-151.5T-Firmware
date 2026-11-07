// FUN_01626d3c @ 01626d3c size=364 calls_out=2 calls_in=3
// strings: 

void FUN_01626d3c(uint *param_1,int *param_2)

{
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 extraout_r1_03;
  int iVar1;
  int iVar2;
  
  iVar2 = param_2[1];
  if (iVar2 != 0) {
    iVar1 = *param_2;
    FUN_016265e8(param_1,param_2,*(undefined4 *)(iVar1 + 0x200),*(undefined4 *)(iVar1 + 0x204),
                 *(undefined4 *)(iVar1 + 0x208));
    if ((*param_1 & 1) != 0) {
      return;
    }
    if (iVar2 != 1) {
      FUN_016265e8(param_1,extraout_r1,*(undefined4 *)(iVar1 + 0x410),*(undefined4 *)(iVar1 + 0x414)
                   ,*(undefined4 *)(iVar1 + 0x418));
      if ((*param_1 & 1) != 0) {
        return;
      }
      if (iVar2 != 2) {
        FUN_016265e8(param_1,extraout_r1_00,*(undefined4 *)(iVar1 + 0x620),
                     *(undefined4 *)(iVar1 + 0x624),*(undefined4 *)(iVar1 + 0x628));
        if ((*param_1 & 1) != 0) {
          return;
        }
        if (iVar2 != 3) {
          FUN_016265e8(param_1,extraout_r1_01,*(undefined4 *)(iVar1 + 0x830),
                       *(undefined4 *)(iVar1 + 0x834),*(undefined4 *)(iVar1 + 0x838));
          if ((*param_1 & 1) != 0) {
            return;
          }
          if (iVar2 != 4) {
            FUN_016265e8(param_1,extraout_r1_02,*(undefined4 *)(iVar1 + 0xa40),
                         *(undefined4 *)(iVar1 + 0xa44),*(undefined4 *)(iVar1 + 0xa48));
            if ((*param_1 & 1) != 0) {
              return;
            }
            if (iVar2 != 5) {
              FUN_016265e8(param_1,extraout_r1_03,*(undefined4 *)(iVar1 + 0xc50),
                           *(undefined4 *)(iVar1 + 0xc54),*(undefined4 *)(iVar1 + 0xc58));
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00faa4a4(iVar2,iVar2,&DAT_018ac168);
}

