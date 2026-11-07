// FUN_0101393c @ 0101393c size=416 calls_out=1 calls_in=3
// strings: 

void FUN_0101393c(undefined1 *param_1,uint *param_2,sbyte param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  
  if (param_2[1] == 0) {
    uVar3 = *param_2;
    uVar7 = ((int *)param_2[2])[1];
    if (uVar3 < uVar7) {
      iVar6 = *(int *)param_2[2];
      uVar5 = uVar3 + 1;
      bVar1 = *(byte *)(iVar6 + uVar3);
      *param_2 = uVar5;
      param_2[1] = (uint)(0xfffffffe < uVar3);
      uVar2 = (uint)bVar1 & ~(-1 << param_3);
      uVar4 = ~(-1 << param_3) & 0xff;
      bVar8 = uVar4 <= uVar2;
      if (uVar2 != uVar4) {
        *(uint *)(param_1 + 4) = uVar2;
        *param_1 = 0;
        return;
      }
      if (uVar3 != 0xffffffff) {
        bVar8 = uVar5 <= uVar7;
      }
      if (bVar8 && (uVar3 != 0xffffffff && uVar7 != uVar5)) {
        uVar2 = uVar3 + 2;
        *param_2 = uVar2;
        param_2[1] = (uint)(0xfffffffd < uVar3);
        uVar4 = ((int)*(char *)(iVar6 + uVar5) & 0x7fU) + ~(-1 << param_3) & 0xff;
        if (-1 < *(char *)(iVar6 + uVar5)) {
LAB_010139ec:
          *(uint *)(param_1 + 4) = uVar4;
          *param_1 = 0;
          return;
        }
        if ((uVar3 < 0xfffffffe && uVar2 <= uVar7) && (uVar3 >= 0xfffffffe || uVar7 != uVar2)) {
          uVar5 = uVar3 + 3;
          uVar2 = (uint)*(char *)(iVar6 + uVar2);
          *param_2 = uVar5;
          param_2[1] = (uint)(0xfffffffc < uVar3);
          bVar8 = 0xfffffffe < uVar2;
          uVar4 = uVar4 + (uVar2 & 0x7f) * 0x80;
          if (uVar2 < 0x80000000) goto LAB_010139ec;
          if (uVar3 != 0xfffffffd) {
            bVar8 = uVar5 <= uVar7;
          }
          if (bVar8 && (uVar3 != 0xfffffffd && uVar7 != uVar5)) {
            uVar3 = FUN_01021a40(param_2);
            iVar6 = uVar4 + (uVar3 & 0x7f) * 0x4000;
            if ((char)uVar3 < '\0') {
              if ((param_2[1] != 0) || (*(uint *)(param_2[2] + 4) <= *param_2)) goto LAB_010139a4;
              uVar3 = FUN_01021a40(param_2);
              if ((char)uVar3 < '\0') {
                param_1[1] = 0xb;
                *param_1 = 1;
                return;
              }
              iVar6 = iVar6 + (uVar3 & 0x7f) * 0x200000;
            }
            *(int *)(param_1 + 4) = iVar6;
            *param_1 = 0;
            return;
          }
        }
      }
    }
  }
LAB_010139a4:
  param_1[1] = 1;
  *param_1 = 1;
  return;
}

