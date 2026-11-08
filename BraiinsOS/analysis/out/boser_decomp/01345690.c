// FUN_01345690 @ 01345690 size=592 calls_out=4 calls_in=2
// strings: 

void FUN_01345690(undefined2 *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  ulonglong uVar13;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  uVar10 = 0;
  local_2c = 0;
  puVar9 = &local_38;
  local_30 = 0;
  local_34 = 0;
  uVar5 = 8;
  local_38 = 0;
  do {
    uVar1 = FUN_01344ae8(param_2,":",1);
    uVar3 = param_2[1];
    uVar11 = param_2[2];
    if (uVar3 <= uVar11) {
      uVar4 = 0;
      if (uVar1 != 0) goto LAB_01345848;
      break;
    }
    uVar6 = (uint)*(byte *)(*param_2 + uVar11);
    uVar2 = (uint)(char)(&DAT_0053309f)[uVar6];
    if ((int)uVar2 < 0) {
      if (uVar1 == 0) break;
      uVar4 = 0;
      if (uVar6 != 0x3a) goto LAB_01345848;
      bVar12 = uVar5 != 8;
      param_2[2] = uVar11 + 1;
      uVar5 = uVar10;
      if (bVar12) goto LAB_01345848;
    }
    else {
      iVar7 = 1;
      do {
        uVar4 = (undefined2)uVar2;
        if (uVar3 - uVar11 == iVar7) {
          param_2[2] = uVar3;
          goto LAB_013457c0;
        }
        uVar6 = (uint)((byte *)(*param_2 + uVar11))[iVar7];
        if ((char)(&DAT_0053309f)[uVar6] < 0) {
          if (uVar6 != 0x2e) goto LAB_01345774;
          uVar4 = 0;
          if (((uVar10 == 7) || ((uVar10 != uVar5) != uVar1)) ||
             (uVar13 = FUN_013449ac(param_2), (uVar13 & 1) == 0)) goto LAB_01345848;
          iVar7 = uVar10 * 2;
          uVar10 = uVar10 + 2;
          *(short *)((int)&local_38 + iVar7 + 2) = (short)(uVar13 >> 0x20);
          *(short *)((int)&local_38 + iVar7) = (short)(uVar13 >> 0x30);
          goto LAB_013457c0;
        }
        iVar7 = iVar7 + 1;
        uVar2 = (int)(char)(&DAT_0053309f)[uVar6] | uVar2 << 4;
        uVar4 = (undefined2)uVar2;
      } while (iVar7 != 4);
      iVar7 = 4;
LAB_01345774:
      param_2[2] = iVar7 + uVar11;
      if ((uVar10 == 0 || uVar10 == uVar5) == uVar1) {
        uVar4 = 0;
        goto LAB_01345848;
      }
      iVar7 = uVar10 * 2;
      uVar10 = uVar10 + 1;
      *(undefined2 *)((int)puVar9 + iVar7) = uVar4;
    }
  } while (uVar10 < 8);
LAB_013457c0:
  uVar4 = 0;
  if (uVar5 == 8) {
    if (uVar10 != 8) goto LAB_01345848;
  }
  else {
    if (uVar10 == 8) goto LAB_01345848;
    if (uVar5 < uVar10) {
      uVar3 = 0xffffffff;
      uVar1 = uVar10;
      do {
        uVar11 = uVar1 - 1;
        if (8 < uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar11,8,&DAT_01ce6b0c);
        }
        if (uVar3 < 0xfffffff8) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(0xffffffff,8,&DAT_01ce6b1c);
        }
        puVar8 = (undefined2 *)((int)puVar9 + uVar10 * 2 + -2);
        uVar3 = uVar3 - 1;
        *(undefined2 *)((int)puVar9 + 0xe) = *puVar8;
        puVar9 = (undefined4 *)((int)puVar9 + -2);
        *puVar8 = 0;
        uVar1 = uVar11;
      } while (uVar5 < uVar11);
    }
  }
  FUN_01bed4e2(param_1 + 1,&local_38,0x10);
  uVar4 = 1;
LAB_01345848:
  *param_1 = uVar4;
  return;
}

