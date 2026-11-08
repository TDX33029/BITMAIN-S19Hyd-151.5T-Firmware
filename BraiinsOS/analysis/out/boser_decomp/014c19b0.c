// FUN_014c19b0 @ 014c19b0 size=284 calls_out=0 calls_in=2
// strings: 

void FUN_014c19b0(int *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  iVar5 = *param_2;
  iVar6 = param_2[-1];
  uVar3 = (uint)*(uint3 *)(iVar5 + 0x29);
  uVar1 = *(uint3 *)(iVar6 + 0x29) & 0xff;
  uVar2 = uVar3 & 0xff;
  bVar7 = uVar1 <= uVar2;
  if ((uVar2 == uVar1) &&
     (uVar1 = (*(uint3 *)(iVar6 + 0x29) & 0xffff) >> 8, uVar2 = (uVar3 & 0xffff) >> 8,
     bVar7 = uVar1 <= uVar2, uVar2 == uVar1)) {
    if (*(byte *)(iVar5 + 0x2b) == 0) {
      if (*(byte *)(iVar6 + 0x2b) != 0) goto LAB_014c1a2c;
    }
    else if (*(byte *)(iVar5 + 0x2b) < *(byte *)(iVar6 + 0x2b)) {
LAB_014c1a2c:
      *param_2 = iVar6;
      piVar4 = param_2 + -1;
      while (piVar4 != param_1) {
        iVar6 = piVar4[-1];
        uVar3 = (uint)*(uint3 *)(iVar5 + 0x29);
        uVar1 = uVar3 & 0xff;
        uVar2 = *(uint3 *)(iVar6 + 0x29) & 0xff;
        bVar7 = uVar2 <= uVar1;
        if ((uVar1 == uVar2) &&
           (uVar1 = (*(uint3 *)(iVar6 + 0x29) & 0xffff) >> 8, uVar2 = (uVar3 & 0xffff) >> 8,
           bVar7 = uVar1 <= uVar2, uVar2 == uVar1)) {
          if (*(byte *)(iVar5 + 0x2b) == 0) {
            if (*(byte *)(iVar6 + 0x2b) == 0) break;
          }
          else if (*(byte *)(iVar6 + 0x2b) <= *(byte *)(iVar5 + 0x2b)) break;
        }
        else if (bVar7) break;
        *piVar4 = iVar6;
        piVar4 = piVar4 + -1;
      }
      *piVar4 = iVar5;
      return;
    }
  }
  else if (!bVar7) goto LAB_014c1a2c;
  return;
}

