// FUN_00fe9db4 @ 00fe9db4 size=612 calls_out=3 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00fe9db4(uint *param_1,undefined4 *param_2,uint param_3,uint param_4,uint *param_5)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint uStack_4c;
  int local_34;
  
  uVar3 = FUN_006c561c(param_2[4],param_2[5],param_2[6],param_2[7]);
  if (param_2[2] == 0) {
    FUN_0118ff94(param_2,1,param_2 + 4);
  }
  puVar9 = (uint *)*param_2;
  uVar11 = param_2[1];
  bVar2 = false;
  local_34 = 0;
  uVar7 = uVar3;
  do {
    uVar7 = uVar11 & uVar7;
    uVar10 = *(uint *)((int)puVar9 + uVar7);
    uVar4 = uVar10 ^ (uVar3 >> 0x19) * 0x1010101;
    for (uVar4 = ~uVar4 & 0x80808080 & uVar4 + 0xfefefeff; uVar4 != 0; uVar4 = uVar4 - 1 & uVar4) {
      uVar5 = uVar7 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                     (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) & uVar11;
      if (param_4 == puVar9[uVar5 * -7 + -6]) {
        iVar6 = thunk_FUN_01bed842(param_3,puVar9[uVar5 * -7 + -7]);
        if (iVar6 == 0) {
          uVar3 = puVar9[uVar5 * -7 + -4];
          uVar7 = puVar9[uVar5 * -7 + -3];
          uVar11 = puVar9[uVar5 * -7 + -2];
          uVar4 = puVar9[uVar5 * -7 + -1];
          *param_1 = puVar9[uVar5 * -7 + -5];
          param_1[1] = uVar3;
          param_1[2] = uVar7;
          param_1[3] = uVar11;
          param_1[4] = uVar4;
          uVar3 = param_5[1];
          uVar7 = param_5[2];
          uVar11 = param_5[3];
          uVar4 = param_5[4];
          puVar9[uVar5 * -7 + -5] = *param_5;
          puVar9[uVar5 * -7 + -4] = uVar3;
          puVar9[uVar5 * -7 + -3] = uVar7;
          puVar9[uVar5 * -7 + -2] = uVar11;
          puVar9[uVar5 * -7 + -1] = uVar4;
          return;
        }
      }
    }
    uVar4 = uVar10 & 0x80808080;
    if (bVar2) {
LAB_00fe9f24:
      if ((uVar4 & uVar10 << 1) != 0) {
        uVar7 = (uint)*(char *)((int)puVar9 + uStack_4c);
        if (-1 < (int)uVar7) {
          uVar7 = *puVar9 & 0x80808080;
          uVar4 = LZCOUNT(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8
                          | uVar7 >> 0x18);
          uVar7 = (uint)*(byte *)((int)puVar9 + (uVar4 >> 3));
          uStack_4c = uVar4 >> 3;
        }
        iVar6 = param_2[3];
        iVar8 = param_2[2];
        bVar1 = (byte)(uVar3 >> 0x19);
        *(byte *)((int)puVar9 + uStack_4c) = bVar1;
        param_2[2] = iVar8 - (uVar7 & 1);
        param_2[3] = iVar6 + 1;
        *(byte *)((int)puVar9 + (uVar11 & uStack_4c - 4) + 4) = bVar1;
        puVar9[uStack_4c * -7 + -7] = param_3;
        puVar9[uStack_4c * -7 + -6] = param_4;
        uVar3 = param_5[1];
        uVar7 = param_5[2];
        uVar11 = param_5[3];
        uVar4 = param_5[4];
        puVar9[uStack_4c * -7 + -5] = *param_5;
        puVar9[uStack_4c * -7 + -4] = uVar3;
        puVar9[uStack_4c * -7 + -3] = uVar7;
        puVar9[uStack_4c * -7 + -2] = uVar11;
        puVar9[uStack_4c * -7 + -1] = uVar4;
        *param_1 = 4;
        return;
      }
      bVar2 = true;
    }
    else {
      if (uVar4 != 0) {
        uStack_4c = uVar7 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                           (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) &
                    uVar11;
        goto LAB_00fe9f24;
      }
      bVar2 = false;
    }
    local_34 = local_34 + 4;
    uVar7 = local_34 + uVar7;
  } while( true );
}

