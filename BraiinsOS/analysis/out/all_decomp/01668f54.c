// FUN_01668f54 @ 01668f54 size=212 calls_out=1 calls_in=1
// strings: 

void FUN_01668f54(undefined4 *param_1,int param_2,uint param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  
  iVar5 = *(int *)(param_2 + 8);
  uVar6 = *(uint *)(param_2 + 0xc);
  uVar4 = 0;
  do {
    if (uVar6 == uVar4) {
      iVar3 = 0;
      goto LAB_01668fd8;
    }
    bVar1 = *(byte *)(iVar5 + uVar4);
    bVar8 = bVar1 <= *(byte *)(param_4 + 1);
    bVar7 = *(byte *)(param_4 + 1) == bVar1;
    if (!bVar8 || bVar7) {
      bVar8 = *(byte *)(param_4 + 2) <= bVar1;
      bVar7 = bVar1 == *(byte *)(param_4 + 2);
    }
    if (bVar8 && !bVar7) {
      bVar8 = bVar1 <= *(byte *)(param_4 + 4);
      bVar7 = *(byte *)(param_4 + 4) == bVar1;
      if (!bVar8 || bVar7) {
        bVar8 = *(byte *)(param_4 + 5) <= bVar1;
        bVar7 = bVar1 == *(byte *)(param_4 + 5);
      }
      if (bVar8 && !bVar7) {
        bVar8 = bVar1 <= *(byte *)(param_4 + 7);
        bVar7 = *(byte *)(param_4 + 7) == bVar1;
        if (!bVar8 || bVar7) {
          bVar8 = *(byte *)(param_4 + 8) <= bVar1;
          bVar7 = bVar1 == *(byte *)(param_4 + 8);
        }
        uVar2 = uVar4;
        if (bVar8 && !bVar7) break;
      }
    }
    uVar4 = uVar4 + 1;
    uVar2 = param_3;
  } while (param_3 + 1 != uVar4);
  if (uVar6 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018ad9c8);
  }
  iVar3 = uVar6 - uVar2;
  uVar6 = uVar2;
LAB_01668fd8:
  param_1[2] = uVar6;
  *(uint *)(param_2 + 8) = iVar5 + uVar6;
  *(int *)(param_2 + 0xc) = iVar3;
  *param_1 = 3;
  param_1[1] = iVar5;
  return;
}

