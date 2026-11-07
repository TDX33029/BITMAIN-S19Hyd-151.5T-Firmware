// FUN_0100bb14 @ 0100bb14 size=352 calls_out=6 calls_in=2
// strings: attempt to join into collection with len > usize::MAX

void FUN_0100bb14(uint *param_1,int *param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *param_2;
  uVar1 = *(uint *)(param_2[2] + 0xc);
  uVar3 = *(uint *)(param_2[2] + 4);
  if (uVar1 != 0) {
    uVar3 = uVar1;
  }
  if (uVar3 != 0) {
    uVar1 = param_2[1];
    if (uVar3 < uVar1) {
      if (*(char *)(iVar4 + uVar3) < -0x40) {
LAB_0100bc50:
                    /* WARNING: Subroutine does not return */
        FUN_00faa8ac(iVar4,uVar1,0,uVar3,&DAT_01882194);
      }
    }
    else {
      if (uVar3 != uVar1) goto LAB_0100bc50;
      if (uVar3 == 0xffffffff) goto LAB_0100bc38;
    }
  }
  uVar1 = uVar3 + param_4 + 1;
  if (uVar3 < uVar1) {
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0,uVar1);
    }
    uVar2 = thunk_FUN_016d4a50(uVar1);
    if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,uVar1);
    }
    FUN_016dd1aa(uVar2,iVar4,uVar3);
    if (uVar1 != uVar3) {
      *(undefined1 *)(uVar2 + uVar3) = 0x23;
      if (param_4 <= uVar1 + ~uVar3) {
        FUN_016dd1aa((undefined1 *)(uVar2 + uVar3) + 1,param_3,param_4);
        *param_1 = uVar1;
        param_1[1] = uVar2;
        param_1[2] = (param_4 - (uVar1 + ~uVar3)) + uVar1;
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018ad7b8);
  }
LAB_0100bc38:
                    /* WARNING: Subroutine does not return */
  FUN_00fb74b8("attempt to join into collection with len > usize::MAX",0x35,&DAT_018ad7c8);
}

