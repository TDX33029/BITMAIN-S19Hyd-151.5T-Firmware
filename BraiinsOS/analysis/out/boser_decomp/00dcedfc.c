// FUN_00dcedfc @ 00dcedfc size=476 calls_out=6 calls_in=1
// strings: 

void FUN_00dcedfc(uint *param_1,uint *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined1 uVar11;
  
  uVar3 = param_2[2];
  uVar10 = *param_2;
  uVar4 = param_2[1];
  uVar8 = param_2[3];
  uVar7 = uVar10;
  if (uVar4 != uVar8) {
    uVar5 = uVar4;
    do {
      uVar4 = *(uint *)(uVar5 + 0xc);
      bVar1 = *(byte *)(uVar5 + 0x11);
      uVar2 = *(undefined1 *)(uVar5 + 0x10);
      if (uVar4 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = 3;
        if (((int)uVar4 < -0x3c) && (uVar11 = 1, 0xffffffb4 < uVar4)) {
          uVar11 = 2;
        }
      }
      uVar4 = uVar5 + 0x14;
      FUN_01bed864(uVar7,uVar5,0xc);
      *(undefined1 *)(uVar7 + 0xd) = uVar11;
      uVar11 = (&DAT_00570918)[bVar1];
      *(undefined1 *)(uVar7 + 0xc) = uVar2;
      *(undefined1 *)(uVar7 + 0xe) = uVar11;
      uVar7 = uVar7 + 0x10;
      uVar5 = uVar4;
    } while (uVar4 != uVar8);
    param_2[1] = uVar4;
  }
  uVar5 = uVar3 * 0x14;
  param_2[2] = 0;
  *param_2 = 4;
  param_2[1] = 4;
  puVar6 = (undefined4 *)(uVar4 + 4);
  param_2[3] = 4;
  uVar7 = uVar7 - uVar10;
  for (iVar9 = (uVar8 - uVar4 >> 2) * -0x33333333; iVar9 != 0; iVar9 = iVar9 + -1) {
    FUN_019bb7e0(puVar6[-1],*puVar6);
    puVar6 = puVar6 + 5;
  }
  if ((uVar5 & 0xc) != 0) {
    uVar4 = uVar5 & 0xfffffff0;
    if (uVar4 == 0) {
      thunk_FUN_01be4678(uVar10);
      uVar10 = 4;
    }
    else {
      uVar10 = FUN_01298554(uVar10,uVar5,4,uVar4);
      if (uVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,uVar4);
      }
    }
  }
  param_1[2] = uVar7 >> 4;
  *param_1 = (uVar3 * 5 & 0x3fffffff) >> 2;
  param_1[1] = uVar10;
  puVar6 = (undefined4 *)(param_2[1] + 4);
  for (iVar9 = (param_2[3] - param_2[1] >> 2) * -0x33333333; iVar9 != 0; iVar9 = iVar9 + -1) {
    FUN_019bb7e0(puVar6[-1],*puVar6);
    puVar6 = puVar6 + 5;
  }
  FUN_0134c054(param_2[2],*param_2,4,0x14);
  return;
}

