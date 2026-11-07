// FUN_01bef3d0 @ 01bef3d0 size=46 calls_out=0 calls_in=1
// strings: 

undefined8 FUN_01bef3d0(uint *param_1,undefined4 param_2)

{
  int *piVar1;
  bool bVar2;
  undefined4 uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 in_cr0;
  undefined4 in_cr13;
  
  if ((*param_1 & 0xf) == 0) {
    param_1 = param_1 + 1;
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(param_1);
      if (*param_1 != 0) {
        uVar4 = *param_1 & 0x10;
        goto LAB_01bef3f4;
      }
      bVar2 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar2);
    *param_1 = 0x10;
    uVar4 = 0;
LAB_01bef3f4:
    DataMemoryBarrier(0x1b);
    return CONCAT44(param_2,uVar4);
  }
  iVar8 = coprocessor_movefromRt(0xf,0,3,in_cr13,in_cr0);
  uVar10 = param_1[1];
  uVar4 = *(uint *)(iVar8 + -0x60);
  uVar9 = uVar10 & 0x3fffffff;
  uVar11 = *param_1;
  if (uVar4 == uVar9) {
    if ((-1 < (int)(uVar11 << 0x1c)) || (-1 < (int)param_1[5])) {
      if ((uVar11 & 3) == 1) {
        puVar5 = (uint *)&DAT_00000001;
        if (param_1[5] < 0x7fffffff) {
          uVar3 = 0;
          param_1[5] = param_1[5] + 1;
        }
        else {
          uVar3 = 0xb;
        }
        goto LAB_01bef334;
      }
      goto LAB_01bef2ae;
    }
    uVar9 = uVar10 & 0x40000000;
    param_1[5] = 0;
LAB_01bef3a2:
    if (param_1[2] == 0) {
LAB_01bef372:
      puVar5 = param_1 + 4;
      piVar1 = (int *)(iVar8 + -0x2c);
      piVar7 = (int *)*piVar1;
      param_1[4] = (uint)piVar7;
      param_1[3] = (uint)piVar1;
      if (piVar1 != piVar7) {
        piVar7[-1] = (int)puVar5;
      }
      *(uint **)(iVar8 + -0x2c) = puVar5;
      *(undefined4 *)(iVar8 + -0x24) = 0;
      uVar3 = 0;
      if (uVar9 != 0) {
        uVar3 = 0x82;
        param_1[5] = 0;
      }
      goto LAB_01bef334;
    }
    puVar5 = (uint *)(~uVar11 & 0x80 | 7);
    software_interrupt(0);
    *(undefined4 *)(iVar8 + -0x24) = 0;
    if (-1 < (int)(uVar11 << 0x1d)) goto LAB_01bef332;
  }
  else {
LAB_01bef2ae:
    puVar5 = (uint *)0x3fffffff;
    if (uVar9 != 0x3fffffff) {
      if ((uVar9 == 0) && ((uVar10 == 0 || ((int)(uVar11 << 0x1d) < 0)))) {
        puVar5 = (uint *)(uVar11 << 0x18);
        if ((int)puVar5 < 0) {
          if (*(int *)(iVar8 + -0x28) == 0) {
            *(undefined4 *)(iVar8 + -0x28) = 0xfffffff4;
            puVar5 = (uint *)&DAT_0000000c;
            software_interrupt(0);
          }
          if (param_1[2] != 0) {
            uVar4 = uVar4 | 0x80000000;
          }
          *(uint **)(iVar8 + -0x24) = param_1 + 4;
        }
        puVar6 = param_1 + 1;
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar6);
          uVar9 = *puVar6;
          if (uVar10 != uVar9) break;
          bVar2 = (bool)hasExclusiveAccess(puVar6);
          if (bVar2) {
            *puVar6 = uVar10 & 0x40000000 | uVar4;
          }
          puVar5 = (uint *)(uint)!bVar2;
        } while (puVar5 != (uint *)0x0);
        DataMemoryBarrier(0x1b);
        if (uVar10 == uVar9) {
          if ((int)(uVar11 << 0x1c) < 0) goto LAB_01bef3a2;
          goto LAB_01bef372;
        }
        *(undefined4 *)(iVar8 + -0x24) = 0;
        if (((uVar11 & 0xc) == 0xc) && (param_1[2] != 0)) goto LAB_01bef3cc;
      }
LAB_01bef332:
      uVar3 = 0x10;
      goto LAB_01bef334;
    }
  }
LAB_01bef3cc:
  uVar3 = 0x83;
LAB_01bef334:
  return CONCAT44(puVar5,uVar3);
}

