// FUN_013e5ff4 @ 013e5ff4 size=120 calls_out=1 calls_in=2
// strings: assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements

void FUN_013e5ff4(int param_1,int param_2,undefined2 param_3,undefined2 param_4,int *param_5,
                 int param_6)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_6 != param_2 + -1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec(&DAT_00533a41,0x30,&DAT_01d305c8);
  }
  uVar2 = (uint)*(ushort *)(param_1 + 0x32);
  if (10 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements",0x20,
                 &DAT_01d305d8);
  }
  iVar3 = param_1 + uVar2 * 4;
  *(undefined2 *)(iVar3 + 4) = param_3;
  uVar1 = (undefined2)(uVar2 + 1);
  *(undefined2 *)(param_1 + 0x32) = uVar1;
  *(undefined2 *)(iVar3 + 6) = param_4;
  *(int **)(param_1 + (uVar2 + 1) * 4 + 0x34) = param_5;
  *(undefined2 *)(param_5 + 0xc) = uVar1;
  *param_5 = param_1;
  return;
}

