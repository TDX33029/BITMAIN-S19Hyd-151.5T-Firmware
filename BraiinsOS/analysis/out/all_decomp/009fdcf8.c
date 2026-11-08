// FUN_009fdcf8 @ 009fdcf8 size=312 calls_out=6 calls_in=4
// strings: assertion failed: self.replace(val).is_none()

void FUN_009fdcf8(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  int local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x10);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x10);
  }
  uVar5 = param_2[1];
  uVar3 = param_2[2];
  *puVar1 = *param_2;
  puVar1[1] = uVar5;
  uVar5 = param_2[3];
  puVar1[2] = uVar3;
  puVar1[3] = uVar5;
  uVar7 = FUN_009fd9d8(param_1 + 0xc,&DAT_00564360,puVar1,&DAT_0186b87c);
  puVar1 = (undefined4 *)((ulonglong)uVar7 >> 0x20);
  piVar2 = (int *)uVar7;
  if (piVar2 != (int *)0x0) {
    (*(code *)puVar1[3])(&local_28,piVar2);
    if ((local_28 == -0xa1a2068 && iStack_20 == -0x4c9b7947) &&
        (iStack_24 == 0x66389fa0 && iStack_1c == 0x2259fa41)) {
      iVar6 = *piVar2;
      iVar4 = piVar2[1];
      thunk_FUN_016d3fb4(piVar2);
      if (iVar6 != -0x80000000) {
        FUN_009fdeb8(iVar6,iVar4);
                    /* WARNING: Subroutine does not return */
        FUN_00faa464("assertion failed: self.replace(val).is_none()",0x2d,&DAT_0186b85c);
      }
    }
    else {
      if ((code *)*puVar1 != (code *)0x0) {
        (*(code *)*puVar1)(piVar2);
      }
      if (puVar1[1] != 0) {
        thunk_FUN_016d3fb4(piVar2);
        return;
      }
    }
  }
  return;
}

