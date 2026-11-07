// FUN_0130a810 @ 0130a810 size=112 calls_out=1 calls_in=2
// strings: assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements

void FUN_0130a810(int param_1,int param_2,undefined4 param_3,int *param_4,int param_5)

{
  undefined2 uVar1;
  uint uVar2;
  
  if (param_5 != param_2 + -1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec(&DAT_00533a41,0x30,&DAT_01d305c8);
  }
  uVar2 = (uint)*(ushort *)(param_1 + 0x32);
  if (10 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements",0x20,
                 &DAT_01d305d8);
  }
  uVar1 = (undefined2)(uVar2 + 1);
  *(undefined2 *)(param_1 + 0x32) = uVar1;
  *(undefined4 *)(param_1 + uVar2 * 4 + 4) = param_3;
  *(int **)(param_1 + (uVar2 + 1) * 4 + 0x34) = param_4;
  *(undefined2 *)(param_4 + 0xc) = uVar1;
  *param_4 = param_1;
  return;
}

