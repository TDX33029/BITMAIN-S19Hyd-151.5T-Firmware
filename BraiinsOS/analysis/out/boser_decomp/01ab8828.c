// FUN_01ab8828 @ 01ab8828 size=260 calls_out=7 calls_in=4
// strings: 

void FUN_01ab8828(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x10);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x10);
  }
  uVar3 = param_2[1];
  uVar5 = param_2[2];
  uVar7 = param_2[3];
  *puVar1 = *param_2;
  puVar1[1] = uVar3;
  puVar1[2] = uVar5;
  puVar1[3] = uVar7;
  uVar8 = FUN_01ab8528(param_1 + 0xc,&DAT_00568658,puVar1,&DAT_01d2ede4);
  iVar4 = (int)((ulonglong)uVar8 >> 0x20);
  piVar2 = (int *)uVar8;
  if (piVar2 != (int *)0x0) {
    (**(code **)(iVar4 + 0xc))(&local_30,piVar2);
    if ((local_30 == -0x19dba75b && iStack_28 == 0xec869bf) &&
        (iStack_2c == -0x5dec2a7 && iStack_24 == -0x2046ba12)) {
      iVar6 = *piVar2;
      iVar4 = piVar2[1];
      thunk_FUN_01be4678(piVar2);
      if (iVar6 != -0x80000000) {
        FUN_01ab896c(iVar6,iVar4);
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec(&DAT_0053165a,0x2d,&DAT_01d2edd4);
      }
    }
    else {
      FUN_01443048(piVar2,iVar4);
    }
  }
  return;
}

