// FUN_01965748 @ 01965748 size=500 calls_out=2 calls_in=3
// strings: 

void FUN_01965748(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,int param_5,
                 int param_6,int param_7)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined4 local_30 [3];
  
  iVar6 = *(int *)(param_2 + 0x14);
  uVar9 = *(uint *)(param_2 + 0x10);
  bVar3 = true;
  uVar4 = iVar6 + 1;
  *(uint *)(param_2 + 0x14) = uVar4;
  if (uVar4 < uVar9) {
    cVar1 = *(char *)(*(int *)(param_2 + 0xc) + uVar4);
    if (cVar1 != '+') {
      if (cVar1 != '-') goto LAB_019657a0;
      bVar3 = false;
    }
    uVar4 = iVar6 + 2;
    *(uint *)(param_2 + 0x14) = uVar4;
  }
LAB_019657a0:
  if (uVar4 < uVar9) {
    bVar2 = *(byte *)(*(int *)(param_2 + 0xc) + uVar4);
    uVar4 = uVar4 + 1;
    *(uint *)(param_2 + 0x14) = uVar4;
    uVar8 = bVar2 - 0x30 & 0xff;
    if (uVar8 < 10) {
      if (uVar4 < uVar9) {
        do {
          uVar7 = *(byte *)(*(int *)(param_2 + 0xc) + uVar4) - 0x30 & 0xff;
          if (9 < uVar7) break;
          uVar4 = uVar4 + 1;
          *(uint *)(param_2 + 0x14) = uVar4;
          if ((0xccccccb < (int)uVar8) && ((uVar8 != 0xccccccc || (7 < uVar7)))) {
            if ((param_5 != 0 || param_6 != 0) && (bVar3)) {
              uVar5 = FUN_01965294(param_2,local_30 + 5);
              param_1[1] = uVar5;
              uVar5 = 1;
              goto LAB_0196590c;
            }
            uVar4 = *(uint *)(param_2 + 0x14);
            if (*(uint *)(param_2 + 0x10) <= uVar4) goto LAB_019658f4;
            goto LAB_019658d4;
          }
          uVar8 = uVar7 + uVar8 * 10;
        } while (uVar9 != uVar4);
      }
      uVar5 = SignedSaturate(param_7 + uVar8,0x20);
      SignedDoesSaturate(uVar5,0x20);
      uVar5 = SignedSaturate(param_7 - uVar8,0x20);
      SignedDoesSaturate(uVar5,0x20);
      FUN_019654a0(param_1);
      return;
    }
    local_30[0] = 0xd;
  }
  else {
    local_30[0] = 5;
  }
  uVar5 = FUN_01965294(param_2,local_30);
  *param_1 = 1;
  param_1[1] = uVar5;
  return;
  while( true ) {
    uVar4 = uVar4 + 1;
    *(uint *)(param_2 + 0x14) = uVar4;
    if (*(uint *)(param_2 + 0x10) == uVar4) break;
LAB_019658d4:
    if (9 < *(byte *)(*(int *)(param_2 + 0xc) + uVar4) - 0x30) break;
  }
LAB_019658f4:
  uVar5 = 0;
  uVar10 = 0x8000000000000000;
  if (param_3 != 0) {
    uVar10 = 0;
  }
  *(undefined8 *)(param_1 + 2) = uVar10;
LAB_0196590c:
  *param_1 = uVar5;
  return;
}

