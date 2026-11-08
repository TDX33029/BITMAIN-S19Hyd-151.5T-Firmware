// FUN_0127b2d8 @ 0127b2d8 size=796 calls_out=8 calls_in=6
// strings: Tried to shrink to a larger capacitymax line length exceeded

void FUN_0127b2d8(uint *param_1,uint *param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  
  uVar5 = *param_2;
  puVar6 = (uint *)param_2[1];
  puVar1 = param_2;
  if (uVar5 == 0x80000000) {
    puVar1 = puVar6;
  }
  if (puVar1[2] <= param_3) {
    if (uVar5 != 0x80000000) {
      *param_1 = uVar5;
      param_1[1] = (uint)puVar6;
      param_1[2] = 0;
      return;
    }
    uVar3 = puVar6[2];
    bVar9 = 0x3ffffffe < uVar3;
    bVar8 = uVar3 == 0x3fffffff;
    uVar5 = uVar3 * 4;
    if (uVar3 < 0x40000000) {
      bVar9 = 0x7ffffffb < uVar5;
      bVar8 = uVar5 == 0x7ffffffc;
    }
    if (bVar9 && !bVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0,uVar5);
    }
    uVar4 = puVar6[1];
    if (uVar5 == 0) {
      uVar7 = 4;
      uVar3 = 0;
    }
    else {
      uVar7 = thunk_FUN_016d4a50(uVar5);
      if (uVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(4,uVar5);
      }
    }
    FUN_016dd1aa(uVar7,uVar4,uVar5);
    *param_1 = uVar3;
    param_1[1] = uVar7;
    param_1[2] = 0;
    return;
  }
  if (uVar5 == 0x80000000) {
    uVar3 = puVar6[2];
    if (uVar3 < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(param_3,uVar3,uVar3,&DAT_0188b804);
    }
    uVar3 = uVar3 - param_3;
    bVar9 = 0x3ffffffe < uVar3;
    bVar8 = uVar3 == 0x3fffffff;
    uVar4 = uVar3 * 4;
    if (uVar3 < 0x40000000) {
      bVar9 = 0x7ffffffb < uVar4;
      bVar8 = uVar4 == 0x7ffffffc;
    }
    if (bVar9 && !bVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0,uVar4);
    }
    uVar7 = puVar6[1];
    if (uVar4 == 0) {
      uVar5 = 0;
      puVar6 = (uint *)&DAT_00000004;
    }
    else {
      puVar6 = (uint *)thunk_FUN_016d4a50(uVar4);
      uVar5 = uVar3;
      if (puVar6 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(4,uVar4);
      }
    }
    FUN_016dd1aa(puVar6,uVar7 + param_3 * 4,uVar4);
joined_r0x0127b39c:
    if ((param_4 & 0xff) != 0) {
      if (uVar3 != 0) {
        uVar4 = 0;
        iVar2 = uVar3 * -4;
        do {
          uVar7 = *(uint *)((int)puVar6 + (-4 - iVar2));
          *(uint *)((int)puVar6 + (-4 - iVar2)) = uVar4 | uVar7 >> (param_4 & 0x1f);
          iVar2 = iVar2 + 4;
          uVar4 = uVar7 << (-param_4 & 0x1f);
        } while (iVar2 != 0);
        goto LAB_0127b4ac;
      }
      goto joined_r0x0127b58c;
    }
    if (uVar3 == 0) goto joined_r0x0127b58c;
LAB_0127b4ac:
    if (puVar6[uVar3 - 1] == 0) {
      iVar2 = uVar3 * -4;
      uVar4 = uVar3 & 0x3fffffff;
      do {
        uVar7 = uVar4;
        iVar2 = iVar2 + 4;
        if (iVar2 == 4) goto joined_r0x0127b58c;
        uVar4 = uVar7 - 1;
      } while (*(int *)((int)puVar6 - iVar2) == 0);
      if (uVar7 < uVar3) {
        uVar3 = uVar7;
      }
      if (uVar5 >> 2 <= uVar3) goto LAB_0127b590;
    }
    else if (uVar5 >> 2 <= uVar3) goto LAB_0127b590;
  }
  else {
    uVar3 = param_2[2];
    if (uVar3 < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,param_3,uVar3,&DAT_018af198);
    }
    uVar3 = uVar3 - param_3;
    if (param_3 == 0) goto joined_r0x0127b39c;
    if (uVar3 != 0) {
      FUN_016dd52c(puVar6,puVar6 + param_3,uVar3 * 4);
      goto joined_r0x0127b39c;
    }
joined_r0x0127b58c:
    uVar3 = 0;
    if (uVar5 >> 2 == 0) goto LAB_0127b590;
  }
  if (uVar5 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("Tried to shrink to a larger capacitymax line length exceeded",0x49,&DAT_018ad594);
  }
  if (uVar5 != 0) {
    if (uVar3 == 0) {
      thunk_FUN_016d3fb4(puVar6);
      *param_1 = 0;
      param_1[1] = 4;
      param_1[2] = 0;
      return;
    }
    uVar5 = thunk_FUN_016d4ea4(puVar6,uVar3 << 2);
    if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar3 << 2);
    }
    *param_1 = uVar3;
    param_1[1] = uVar5;
    param_1[2] = uVar3;
    return;
  }
  uVar5 = 0;
LAB_0127b590:
  *param_1 = uVar5;
  param_1[1] = (uint)puVar6;
  param_1[2] = uVar3;
  return;
}

