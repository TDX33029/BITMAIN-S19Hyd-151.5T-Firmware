// FUN_01170a70 @ 01170a70 size=360 calls_out=4 calls_in=2
// strings: 

int * FUN_01170a70(int *param_1,undefined4 *param_2)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined8 uVar5;
  int local_30;
  undefined1 *local_2c;
  code *local_28;
  
  piVar4 = (int *)0x0;
  piVar3 = (int *)(*param_1 + 0xe8);
  do {
    DataMemoryBarrier(0xb);
    do {
      piVar2 = (int *)*piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = 1;
    DataMemoryBarrier(0xb);
    if (piVar2 == (int *)&DAT_00000001) {
      if (piVar4 == (int *)0x0) {
        uVar5 = (**(code **)*param_2)(param_2[1]);
        piVar4 = (int *)thunk_FUN_01be5118(8);
        if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,8);
        }
        *(undefined8 *)piVar4 = uVar5;
      }
    }
    else {
      if (piVar2 == (int *)0x0) goto LAB_01170bbc;
      uVar5 = (**(code **)*param_2)(param_2[1]);
      (**(code **)(*piVar2 + 0xc))(piVar2[1]);
      *(undefined8 *)piVar2 = uVar5;
      FUN_01170c5c(piVar4);
      piVar4 = piVar2;
    }
    local_30 = *piVar3;
    if (local_30 == 1) {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(piVar3);
        if (bVar1) {
          *piVar3 = (int)piVar4;
          bVar1 = true;
          goto LAB_01170b68;
        }
        local_30 = *piVar3;
      } while (local_30 == 1);
    }
    bVar1 = false;
    ClearExclusiveLocal();
LAB_01170b68:
    DataMemoryBarrier(0xb);
    if (bVar1) {
      piVar4 = (int *)0x0;
      param_1 = (int *)0x0;
LAB_01170bbc:
      FUN_01170c5c(piVar4);
      return param_1;
    }
    if (local_30 != 0) {
      local_28 = FUN_012fd02c;
      local_2c = (undefined1 *)&local_30;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_0057f607,&local_2c,&DAT_01c209bc);
    }
  } while( true );
}

