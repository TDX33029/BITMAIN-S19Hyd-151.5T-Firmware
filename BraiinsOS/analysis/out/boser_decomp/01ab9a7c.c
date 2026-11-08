// FUN_01ab9a7c @ 01ab9a7c size=356 calls_out=5 calls_in=2
// strings: 

void FUN_01ab9a7c(int param_1,int *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  int iVar10;
  uint unaff_r11;
  int iVar11;
  
  piVar3 = (int *)FUN_01ac2710(param_1 + 0xc);
  if (piVar3 == (int *)0x0) {
    return;
  }
  if (*piVar3 == 0) {
    unaff_r11 = piVar3[3];
    iVar7 = *param_2;
    iVar8 = param_2[1];
    iVar10 = unaff_r11 * -0x10;
    iVar11 = -1;
    *piVar3 = -1;
    uVar6 = unaff_r11;
    do {
      uVar4 = uVar6;
      if (iVar10 == 0) goto LAB_01ab9b28;
      piVar5 = (int *)((piVar3[2] + -0x10) - iVar10);
      iVar10 = iVar10 + 0x10;
      uVar6 = uVar4 - 1;
    } while (*piVar5 != iVar7 || piVar5[1] != iVar8);
    if (uVar6 < unaff_r11) {
      iVar10 = piVar3[2] + uVar6 * 0x10;
      cVar1 = *(char *)(iVar10 + 8);
      FUN_01bed864(iVar10,iVar10 + 0x10,(unaff_r11 - uVar4) * 0x10);
      iVar11 = *piVar3;
      piVar3[3] = unaff_r11 - 1;
      if (cVar1 != '\x01') {
        *piVar3 = iVar11 + 1;
        DataMemoryBarrier(0xb);
        puVar2 = (undefined4 *)&UNK_01d2ee94;
        puVar9 = DAT_01d50f84;
        if ((DAT_01d51af4 == 2) && (puVar2 = &DAT_01d50f7c, DAT_01d50f7c != 0)) {
          iVar10 = DAT_01d50f80 + (*(int *)(DAT_01d50f84 + 8) - 1U & 0xfffffff8) + 8;
        }
        else {
          iVar10 = puVar2[1];
          if (DAT_01d51af4 != 2) {
            puVar9 = &DAT_01d2e6fc;
          }
        }
        (**(code **)(puVar9 + 0x40))(iVar10,*(code **)(puVar9 + 0x40),*param_2,param_2[1]);
        return;
      }
LAB_01ab9b28:
      *piVar3 = iVar11 + 1;
      return;
    }
  }
  else {
    uVar6 = FUN_01306fc8(&DAT_01d2ee54);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0066651c(uVar6,unaff_r11,&DAT_01d2eed0);
}

