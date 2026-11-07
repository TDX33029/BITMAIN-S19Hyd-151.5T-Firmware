// FUN_0132f1ec @ 0132f1ec size=220 calls_out=5 calls_in=2
// strings: 

void FUN_0132f1ec(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int local_30;
  uint uStack_2c;
  int local_28;
  int iStack_24;
  int iStack_20;
  
  FUN_0132dba0(&local_30);
  if (local_30 == 0x12) {
    uVar2 = *(uint *)(param_2 + 0x14);
    if (uStack_2c == uVar2) {
      param_1[4] = uStack_2c;
      *param_1 = 1;
    }
    else {
      if (uVar2 <= uStack_2c) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uStack_2c,uVar2,&DAT_01ce635c);
      }
      if (*(char *)(*(int *)(param_2 + 0x10) + uStack_2c) == ')') {
        *param_1 = 0x12;
        param_1[1] = uStack_2c + 1;
      }
      else {
        iVar1 = thunk_FUN_01be5118(0x14);
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(1,0x14);
        }
        FUN_01bed4e2(iVar1,&DAT_004507f8,0x14);
        *param_1 = 0;
        param_1[1] = 0x14;
        param_1[2] = iVar1;
        param_1[3] = 0x14;
        param_1[4] = uStack_2c;
      }
    }
  }
  else {
    param_1[2] = local_28;
    param_1[3] = iStack_24;
    param_1[4] = iStack_20;
    *param_1 = local_30;
    param_1[1] = uStack_2c;
  }
  return;
}

