// FUN_016bc880 @ 016bc880 size=204 calls_out=2 calls_in=2
// strings: AhoCorasick::try_find is not expected to fail

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_016bc880(int *param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  uint local_20;
  
  local_30 = *param_3;
  iStack_2c = param_3[1];
  iStack_28 = param_3[2];
  iStack_24 = param_3[3];
  local_20 = param_3[4];
  if (*(char *)((int)param_2 + 9) == '\0') {
LAB_016bc8c8:
    (**(code **)(param_2[1] + 0x48))
              (&local_40,*param_2 + (*(int *)(param_2[1] + 8) - 1U & 0xfffffff8) + 8,&local_30);
    if (local_40 != 2) {
      *param_1 = local_40;
      param_1[1] = iStack_3c;
      param_1[2] = iStack_38;
      param_1[3] = iStack_34;
      return;
    }
  }
  else {
    if (*(char *)((int)param_2 + 9) == '\x01') {
      if ((local_20 & 1) == 0) goto LAB_016bc8c8;
      uVar1 = 0;
    }
    else {
      if ((local_20 & 1) != 0) goto LAB_016bc8c8;
      uVar1 = 1;
    }
    iStack_3c = FUN_00660e80(uVar1);
  }
  local_30 = iStack_3c;
                    /* WARNING: Subroutine does not return */
  FUN_013073dc("AhoCorasick::try_find is not expected to fail",0x2d,&local_30,&DAT_01d09108);
}

