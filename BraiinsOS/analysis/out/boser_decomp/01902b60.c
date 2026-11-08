// FUN_01902b60 @ 01902b60 size=312 calls_out=6 calls_in=0
// strings: 

void FUN_01902b60(int *param_1,int param_2,int *param_3,int param_4,int *param_5,int param_6)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined1 uStack_25;
  
  if (0x20 < *(uint *)(param_2 + 0x20)) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,*(uint *)(param_2 + 0x20),0x20,&DAT_01d2575c);
  }
  FUN_00704cc8(&local_38,*(undefined1 *)(*param_1 + 0x10),param_2);
  if (local_38 == 0xc) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&uStack_25,&DAT_01d24da4,&DAT_01d24cf4);
  }
  if (param_4 == 4) {
    if (param_6 == 8) {
      iVar5 = *param_3;
      iVar6 = *param_5;
      iVar7 = param_5[1];
      piVar1 = (int *)thunk_FUN_01be5118(0x1c);
      if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x1c);
      }
      iVar3 = 0;
      *piVar1 = local_38;
      piVar1[5] = iVar6;
      piVar1[2] = local_30;
      piVar1[3] = local_2c;
      piVar1[6] = iVar7;
      piVar1[1] = local_34;
      piVar1[4] = iVar5;
      do {
        *(undefined1 *)(param_2 + iVar3) = 0;
        iVar3 = iVar3 + 1;
      } while (iVar3 != 0x20);
      return;
    }
    uVar2 = 8;
    puVar4 = &DAT_01d24f88;
  }
  else {
    uVar2 = 4;
    puVar4 = &DAT_01d24f78;
    param_6 = param_4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_013070f0(uVar2,param_6,puVar4);
}

