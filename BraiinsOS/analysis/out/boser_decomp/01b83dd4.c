// FUN_01b83dd4 @ 01b83dd4 size=540 calls_out=3 calls_in=1
// strings: 

uint FUN_01b83dd4(uint *param_1,int *param_2,undefined4 param_3,undefined4 param_4,uint *param_5)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  int *piVar5;
  uint *puVar6;
  undefined2 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  ushort *puVar12;
  int iVar13;
  uint local_1a0;
  uint local_19c;
  ushort auStack_198 [14];
  uint local_17c [7];
  int local_160;
  int local_15c [12];
  byte abStack_12c [256];
  int local_2c;
  
  uVar10 = 0;
  local_2c = DAT_01d53560;
  local_1a0 = 0;
  local_19c = 0;
  uVar2 = FUN_01b80b64(abStack_12c,0x100,&local_160,&local_19c,&local_1a0,param_3,param_4);
  if (uVar2 < 0xffffff89) {
    *param_5 = (uint)(local_160 != 0);
    if (local_1a0 < 0xd) {
      if (*param_2 + 1U < local_19c) {
        uVar2 = 0xffffffd0;
      }
      else {
        *param_2 = local_19c - 1;
        iVar3 = 0;
        local_17c[0] = (uint)CONCAT11((char)(local_19c - 1),(char)local_1a0);
        *param_1 = local_17c[0];
        piVar5 = &local_160;
        for (; local_1a0 != uVar10; uVar10 = uVar10 + 1) {
          piVar5 = piVar5 + 1;
          iVar13 = *piVar5;
          *piVar5 = iVar3;
          iVar3 = iVar3 + (iVar13 << (uVar10 & 0xff));
        }
        puVar11 = param_1 + local_19c;
        pbVar4 = abStack_12c;
        puVar6 = param_1;
        while (puVar6 != puVar11) {
          if (*pbVar4 == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = ((local_1a0 & 0xff) + 1) - (uint)*pbVar4 & 0xff;
          }
          puVar6 = puVar6 + 1;
          *puVar6 = uVar8;
          pbVar4 = pbVar4 + 1;
        }
        FUN_01bed93e(auStack_198,0,0x1c);
        FUN_01bed93e(local_17c,0,0x1c);
        puVar6 = param_1;
        while (puVar6 != puVar11) {
          puVar6 = puVar6 + 1;
          auStack_198[(byte)*puVar6] = auStack_198[(byte)*puVar6] + 1;
        }
        uVar8 = 0;
        puVar7 = (undefined2 *)((int)local_17c + uVar10 * 2);
        puVar12 = auStack_198 + uVar10;
        for (; uVar10 != 0; uVar10 = uVar10 - 1) {
          uVar1 = *puVar12;
          *puVar7 = (short)uVar8;
          uVar8 = (uVar1 + uVar8 & 0xffff) >> 1;
          puVar7 = puVar7 + -1;
          puVar12 = puVar12 + -1;
        }
        while (param_1 != puVar11) {
          param_1 = param_1 + 1;
          uVar8 = *param_1;
          uVar9 = uVar8 & 0xff;
          uVar10 = 0;
          if (uVar9 != 0) {
            uVar10 = 0x20 - uVar9;
          }
          uVar1 = *(ushort *)((int)local_17c + uVar9 * 2);
          *(ushort *)((int)local_17c + uVar9 * 2) = uVar1 + 1;
          if (uVar9 != 0) {
            *param_1 = uVar8 | (uint)uVar1 << (uVar10 & 0xff);
          }
        }
      }
    }
    else {
      uVar2 = 0xffffffd4;
    }
  }
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return uVar2;
}

