// FUN_01ab83f4 @ 01ab83f4 size=264 calls_out=6 calls_in=2
// strings: 

void FUN_01ab83f4(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x28);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x28);
  }
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar7 = param_2[3];
  uVar8 = param_2[4];
  *puVar1 = *param_2;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar7;
  puVar1[4] = uVar8;
  uVar4 = param_2[6];
  uVar5 = param_2[7];
  uVar7 = param_2[8];
  uVar8 = param_2[9];
  puVar1[5] = param_2[5];
  puVar1[6] = uVar4;
  puVar1[7] = uVar5;
  puVar1[8] = uVar7;
  puVar1[9] = uVar8;
  uVar9 = FUN_01ab8528(param_1 + 0xc,&DAT_0056ac88,puVar1,&DAT_01d2edf4);
  iVar3 = (int)((ulonglong)uVar9 >> 0x20);
  iVar2 = (int)uVar9;
  if (iVar2 != 0) {
    (**(code **)(iVar3 + 0xc))(&local_30,iVar2);
    if ((local_30 == -0x4f9810a8 && iStack_28 == -0x52955d18) &&
        (iStack_2c == 0x6a483073 && iStack_24 == -0x69c5773d)) {
      puVar6 = *(undefined1 **)(iVar2 + 0x20);
      thunk_FUN_01be4678(iVar2);
      if (puVar6 != &DAT_3b9aca00) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec(&DAT_0053165a,0x2d,&DAT_01d2edd4);
      }
    }
    else {
      FUN_01443048(iVar2,iVar3);
    }
  }
  return;
}

