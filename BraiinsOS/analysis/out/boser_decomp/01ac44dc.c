// FUN_01ac44dc @ 01ac44dc size=416 calls_out=7 calls_in=1
// strings: 

void FUN_01ac44dc(uint *param_1)

{
  uint uVar1;
  uint *puVar2;
  code *pcVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 *puVar11;
  
  uVar1 = *param_1;
  if (uVar1 != 0xf || param_1[1] != 0) {
    iVar6 = 10;
    if ((uint)(uVar1 < 3) <= -param_1[1]) {
      iVar6 = uVar1 - 3;
    }
    switch(iVar6) {
    case 2:
      if ((char)param_1[2] == '\x03') {
        puVar8 = (undefined4 *)param_1[3];
        uVar9 = *puVar8;
        puVar11 = (undefined4 *)puVar8[1];
        pcVar3 = (code *)*puVar11;
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)(uVar9);
        }
        if (puVar11[1] != 0) {
          thunk_FUN_01be4678(uVar9);
        }
        thunk_FUN_01be4678(puVar8);
        return;
      }
      break;
    case 5:
      if (((char)param_1[2] == '\n') && (param_1[3] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x01ac45ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(param_1[3] + 0x10))(param_1 + 6,param_1[4],param_1[5]);
        return;
      }
      break;
    case 6:
      bVar5 = 5;
      puVar2 = param_1 + 2;
      if (1 < (byte)*puVar2) {
        bVar5 = (byte)*puVar2 - 2;
      }
      if (bVar5 < 4) {
        iVar6 = 8;
        iVar10 = 0x10;
        iVar7 = 0xc;
      }
      else if (bVar5 == 4) {
        if ((short)param_1[3] == 0x12) {
          return;
        }
        iVar6 = 0xc;
        iVar10 = 0x14;
        iVar7 = 0x10;
      }
      else {
        iVar6 = 0x10;
        iVar10 = 0x18;
        iVar7 = 0x14;
      }
                    /* WARNING: Could not recover jumptable at 0x01ac469c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(int *)((int)param_1 + iVar7) + 0x10))
                ((byte *)((int)puVar2 + iVar10),*(undefined4 *)((int)puVar2 + iVar6),
                 *(undefined4 *)((int)puVar2 + iVar7));
      return;
    case 9:
      uVar1 = param_1[2];
      if (-1 < (int)uVar1) {
        uVar4 = param_1[3];
LAB_01ac4650:
        FUN_0134bd64(uVar1,uVar4);
        return;
      }
      break;
    case 10:
      if (param_1[7] != 0) {
        thunk_FUN_01be4678(param_1[6],&switchD_01ac451c::switchdataD_01ac4520,iVar6,2 - uVar1);
      }
      FUN_01410ec8(param_1[9],param_1[10]);
      FUN_0134aee0(param_1[8],param_1[9],4,0x34);
      FUN_008e0ddc(param_1 + 0xb);
      FUN_0178e884(param_1[0x10]);
      uVar1 = param_1[0x12];
      if (uVar1 != 0x80000000) {
        uVar4 = param_1[0x13];
        goto LAB_01ac4650;
      }
    }
  }
  return;
}

