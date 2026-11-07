// FUN_01b84920 @ 01b84920 size=1000 calls_out=10 calls_in=2
// strings: 

uint FUN_01b84920(undefined1 *param_1,int param_2,undefined1 *param_3,uint param_4,uint param_5,
                 uint param_6,undefined4 param_7,int param_8,uint param_9,int param_10,
                 uint *param_11,uint param_12)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  uint local_30;
  int local_2c;
  
  puVar2 = param_11;
  iVar1 = param_10;
  local_2c = DAT_01d53560;
  uVar8 = -param_8 & 3;
  if ((param_9 < uVar8) || (param_9 - uVar8 < 0x1b04)) {
    uVar8 = 0xffffffbe;
    goto LAB_01b849a4;
  }
  if (param_4 == 0 || param_2 == 0) {
LAB_01b849a0:
    uVar8 = 0;
    goto LAB_01b849a4;
  }
  if (0x20000 < param_4) {
    uVar8 = 0xffffffb8;
    goto LAB_01b849a4;
  }
  if (0xc < param_6) {
    uVar8 = 0xffffffd4;
    goto LAB_01b849a4;
  }
  if (0xff < param_5) {
    uVar8 = 0xffffffd2;
    goto LAB_01b849a4;
  }
  if (param_5 == 0) {
    param_5 = 0xff;
  }
  if (param_6 == 0) {
    param_6 = 0xb;
  }
  uVar7 = (param_12 & 7) >> 2;
  if (param_11 == (uint *)0x0) {
    uVar7 = 0;
  }
  if ((uVar7 == 0) || (*param_11 != 2)) {
    iVar9 = param_8 + uVar8;
    uVar8 = (param_12 & 0xf) >> 3;
    if (param_4 < 0xa000) {
      uVar8 = 0;
    }
    if (uVar8 == 0) {
LAB_01b84a98:
      iVar10 = iVar9 + 0x804;
      uVar8 = FUN_01b83060(iVar9,&param_5,param_3,param_4,iVar10,0x1000);
      if (0xffffff88 < uVar8) goto LAB_01b849a4;
      if (param_4 == uVar8) {
        uVar8 = 1;
        *param_1 = *param_3;
        goto LAB_01b849a4;
      }
      if (uVar8 <= (param_4 >> 7) + 4) goto LAB_01b849a0;
      if (puVar2 != (uint *)0x0) {
        if (*puVar2 == 1) {
          iVar4 = FUN_01b8470c(iVar1,iVar9,param_5);
          if (iVar4 != 0) goto LAB_01b84ba8;
          *puVar2 = 0;
        }
        else {
          bVar11 = uVar7 != 0;
          uVar7 = *puVar2;
          if (bVar11) {
LAB_01b84ba8:
            if (uVar7 != 0) goto LAB_01b84a4c;
          }
        }
      }
      iVar4 = iVar9 + 0x400;
      uVar5 = FUN_01b847d8(param_6,param_4,param_5,iVar10,0x1300,iVar4,iVar9,param_12);
      uVar8 = FUN_01b84024(iVar4,iVar9,param_5,uVar5,iVar10,0x1300);
      if ((0xffffff88 < uVar8) ||
         (uVar8 = FUN_01b83ae8(param_1,param_2,iVar4,param_5,uVar8,iVar10,0x2ec), 0xffffff88 < uVar8
         )) goto LAB_01b849a4;
      if ((puVar2 == (uint *)0x0) || (*puVar2 == 0)) {
        if (param_4 <= uVar8 + 0xc) goto LAB_01b849a0;
        if (puVar2 != (uint *)0x0) goto LAB_01b84c84;
      }
      else {
        uVar7 = FUN_01b846ac(iVar1,iVar9,param_5);
        iVar9 = FUN_01b846ac(iVar4,iVar9,param_5);
        if ((uVar7 <= uVar8 + iVar9) || (param_4 <= uVar8 + 0xc)) goto LAB_01b84a4c;
LAB_01b84c84:
        *puVar2 = 0;
      }
      puVar6 = param_1 + uVar8;
      if (iVar1 != 0) {
        FUN_01bed4e2(iVar1,iVar4,0x404);
      }
      goto LAB_01b84a6c;
    }
    local_30 = param_5;
    uVar8 = FUN_01b82f2c(iVar9,&local_30,param_3,0x1000);
    if (0xffffff88 < uVar8) goto LAB_01b849a4;
    local_30 = param_5;
    uVar3 = FUN_01b82f2c(iVar9,&local_30,param_3 + (param_4 - 0x1000),0x1000);
    if (uVar3 < 0xffffff89) {
      if (uVar8 + uVar3 < 0x45) goto LAB_01b849a0;
      goto LAB_01b84a98;
    }
  }
  else {
LAB_01b84a4c:
    puVar6 = param_1;
    iVar4 = iVar1;
LAB_01b84a6c:
    uVar3 = FUN_01b8389c(param_1,puVar6,param_1 + param_2,param_3,param_4,param_7,iVar4);
  }
  uVar8 = uVar3;
LAB_01b849a4:
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return uVar8;
}

