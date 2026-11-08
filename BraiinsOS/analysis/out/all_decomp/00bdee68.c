// FUN_00bdee68 @ 00bdee68 size=480 calls_out=4 calls_in=2
// strings: 

int * FUN_00bdee68(int *param_1,undefined4 *param_2)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined8 uVar5;
  int local_30;
  undefined1 *local_2c;
  undefined1 *local_28;
  
  piVar2 = (int *)0x0;
  piVar3 = (int *)(*param_1 + 0x50);
  do {
    DataMemoryBarrier(0xb);
    do {
      piVar4 = (int *)*piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = 1;
    DataMemoryBarrier(0xb);
    if (piVar4 == (int *)&DAT_00000001) {
      if (piVar2 == (int *)0x0) {
        uVar5 = (**(code **)*param_2)(param_2[1]);
        piVar2 = (int *)thunk_FUN_016d4a50(8);
        if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,8);
        }
        *(undefined8 *)piVar2 = uVar5;
        local_30 = *piVar3;
      }
      else {
        local_30 = *piVar3;
      }
    }
    else {
      if (piVar4 == (int *)0x0) {
        if (piVar2 == (int *)0x0) {
          return param_1;
        }
        (**(code **)(*piVar2 + 0xc))(piVar2[1]);
        thunk_FUN_016d3fb4(piVar2);
        return param_1;
      }
      uVar5 = (**(code **)*param_2)(param_2[1]);
      (**(code **)(*piVar4 + 0xc))(piVar4[1]);
      *(undefined8 *)piVar4 = uVar5;
      if (piVar2 == (int *)0x0) {
        local_30 = *piVar3;
        piVar2 = piVar4;
      }
      else {
        (**(code **)(*piVar2 + 0xc))(piVar2[1]);
        thunk_FUN_016d3fb4(piVar2);
        local_30 = *piVar3;
        piVar2 = piVar4;
      }
    }
    if (local_30 == 1) {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(piVar3);
        if (bVar1) {
          *piVar3 = (int)piVar2;
          DataMemoryBarrier(0xb);
          return (int *)0x0;
        }
        local_30 = *piVar3;
      } while (local_30 == 1);
    }
    ClearExclusiveLocal();
    DataMemoryBarrier(0xb);
  } while (local_30 == 0);
  local_28 = &LAB_00fac484;
  local_2c = (undefined1 *)&local_30;
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(&DAT_0057d531,&local_2c,&DAT_01871428);
}

