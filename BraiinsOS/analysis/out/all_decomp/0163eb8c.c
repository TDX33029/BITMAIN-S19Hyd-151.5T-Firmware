// FUN_0163eb8c @ 0163eb8c size=524 calls_out=2 calls_in=2
// strings: assertion failed: self.tail.is_none()

void FUN_0163eb8c(uint *param_1,uint *param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  
  uVar5 = param_2[2];
  ClearExclusiveLocal();
  if ((uVar5 & param_2[3]) == 0xffffffff) {
    if (*param_2 == 0) {
      if ((uint *)param_1[2] != param_2) {
        return;
      }
      puVar6 = (uint *)param_2[1];
      param_1[2] = (uint)puVar6;
    }
    else {
      puVar6 = (uint *)param_2[1];
      *(uint **)(*param_2 + 4) = puVar6;
    }
    if (puVar6 != (uint *)0x0) {
      *puVar6 = *param_2;
      *param_2 = 0;
      param_2[1] = 0;
      return;
    }
    if ((uint *)param_1[3] == param_2) {
      param_1[3] = *param_2;
      *param_2 = 0;
      param_2[1] = 0;
      return;
    }
    return;
  }
  uVar3 = param_1[1] ^ param_2[3];
  uVar7 = *param_1 ^ uVar5 | 0x3f;
  bVar1 = (uint)(0xfffffffd < uVar7) <= uVar3 - 0xf;
  uVar5 = 0xfffffffe;
  if (uVar3 < 0x10 && bVar1) {
    uVar5 = uVar7;
  }
  if (uVar3 >= 0x10 || !bVar1) {
    uVar3 = 0xf;
  }
  uVar5 = LZCOUNT(uVar5) | 0x20;
  if (uVar3 != 0) {
    uVar5 = LZCOUNT(uVar3);
  }
  uVar3 = (uint)((short)(uVar5 ^ 0x3e) * 0x2b) >> 8;
  if (0x23 < (uVar5 ^ 0x3e)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar3,6,&DAT_018ac84c);
  }
  ClearExclusiveLocal();
  iVar2 = param_1[4] + (uVar3 | uVar3 << 5) * 0x10;
  uVar3 = *(int *)(iVar2 + 0x208) * 6 & 0x3e;
  uVar5 = param_2[2] >> uVar3 | param_2[3] << (0x20 - uVar3 & 0xff);
  if (-1 < (int)(uVar3 - 0x20)) {
    uVar5 = param_2[3] >> (uVar3 - 0x20 & 0xff);
  }
  uVar5 = uVar5 & 0x3f;
  piVar4 = (int *)(iVar2 + uVar5 * 8);
  if (*param_2 == 0) {
    if ((uint *)*piVar4 != param_2) {
      if ((uint *)*piVar4 != (uint *)0x0) {
        return;
      }
      goto LAB_0163ed1c;
    }
    puVar6 = (uint *)param_2[1];
    *piVar4 = (int)puVar6;
    if (puVar6 == (uint *)0x0) goto LAB_0163ed04;
LAB_0163ec50:
    *puVar6 = *param_2;
LAB_0163ec58:
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    puVar6 = (uint *)param_2[1];
    *(uint **)(*param_2 + 4) = puVar6;
    if (puVar6 != (uint *)0x0) goto LAB_0163ec50;
LAB_0163ed04:
    if ((uint *)piVar4[1] == param_2) {
      piVar4[1] = *param_2;
      goto LAB_0163ec58;
    }
  }
  if (*piVar4 != 0) {
    return;
  }
LAB_0163ed1c:
  if (piVar4[1] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: self.tail.is_none()",0x25,&DAT_018acf1c);
  }
  uVar3 = 1 << uVar5;
  uVar7 = uVar5 - 0x20;
  if (-1 < (int)uVar7) {
    uVar3 = 0;
  }
  *(uint *)(iVar2 + 0x200) = *(uint *)(iVar2 + 0x200) ^ uVar3;
  uVar5 = 1 >> (0x20 - uVar5 & 0xff);
  if (-1 < (int)uVar7) {
    uVar5 = 1 << (uVar7 & 0xff);
  }
  *(uint *)(iVar2 + 0x204) = *(uint *)(iVar2 + 0x204) ^ uVar5;
  return;
}

