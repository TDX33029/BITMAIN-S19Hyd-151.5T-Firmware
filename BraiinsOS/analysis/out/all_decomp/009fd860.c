// FUN_009fd860 @ 009fd860 size=300 calls_out=5 calls_in=2
// strings: assertion failed: self.replace(val).is_none()

void FUN_009fd860(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x28);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x28);
  }
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar6 = param_2[3];
  uVar7 = param_2[4];
  *puVar1 = *param_2;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar6;
  puVar1[4] = uVar7;
  uVar3 = param_2[6];
  uVar4 = param_2[7];
  uVar6 = param_2[8];
  uVar7 = param_2[9];
  puVar1[5] = param_2[5];
  puVar1[6] = uVar3;
  puVar1[7] = uVar4;
  puVar1[8] = uVar6;
  puVar1[9] = uVar7;
  uVar8 = FUN_009fd9d8(param_1 + 0xc,&DAT_00565770,puVar1,&DAT_0186b86c);
  puVar1 = (undefined4 *)((ulonglong)uVar8 >> 0x20);
  iVar2 = (int)uVar8;
  if (iVar2 != 0) {
    (*(code *)puVar1[3])(&local_30,iVar2);
    if ((local_30 == 0x51809c7c && iStack_28 == -0x7ad27dec) &&
        (iStack_2c == 0x4a853532 && iStack_24 == 0x7af5abf6)) {
      puVar5 = *(undefined1 **)(iVar2 + 0x20);
      thunk_FUN_016d3fb4(iVar2);
      if (puVar5 != &DAT_3b9aca00) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464("assertion failed: self.replace(val).is_none()",0x2d,&DAT_0186b85c);
      }
    }
    else {
      if ((code *)*puVar1 != (code *)0x0) {
        (*(code *)*puVar1)(iVar2);
      }
      if (puVar1[1] != 0) {
        thunk_FUN_016d3fb4(iVar2);
        return;
      }
    }
  }
  return;
}

