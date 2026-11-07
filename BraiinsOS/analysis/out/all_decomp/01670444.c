// FUN_01670444 @ 01670444 size=276 calls_out=2 calls_in=1
// strings: 

void FUN_01670444(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_e0 [72];
  undefined1 auStack_98 [116];
  
  iVar8 = param_1 + 0xc0;
  iVar9 = 0;
  do {
    uVar5 = *(uint *)(iVar8 + -0x48);
    uVar3 = *(undefined4 *)(iVar8 + 0x74);
    uVar4 = *(uint *)(iVar8 + 0x78);
    uVar1 = uVar5;
    if (uVar4 < uVar5) {
      uVar1 = uVar4;
    }
    uVar1 = FUN_016dd50a(uVar3,*(undefined4 *)(iVar8 + -0x4c),uVar1);
    if (uVar1 == 0) {
      uVar1 = uVar4 - uVar5;
    }
    if (0x7fffffff < uVar1) {
      FUN_016dd1aa(auStack_98,iVar8,0x74);
      FUN_016dd1aa(auStack_e0,iVar8 + 0x7c,0x44);
      iVar7 = iVar9;
      do {
        iVar6 = param_1 + iVar7;
        FUN_016dd1aa(iVar6 + 0xc0,iVar6,0xc0);
        if (iVar7 == 0) {
          iVar7 = param_1;
          goto LAB_0167046c;
        }
        uVar5 = *(uint *)(iVar6 + -0x48);
        uVar1 = uVar5;
        if (uVar4 < uVar5) {
          uVar1 = uVar4;
        }
        iVar2 = FUN_016dd50a(uVar3,*(undefined4 *)(iVar6 + -0x4c),uVar1);
        iVar7 = iVar7 + -0xc0;
        if (iVar2 == 0) {
          iVar2 = uVar4 - uVar5;
        }
      } while (iVar2 < 0);
      iVar7 = param_1 + iVar7 + 0xc0;
LAB_0167046c:
      FUN_016dd1aa(iVar7,auStack_98,0x74);
      *(undefined4 *)(iVar6 + 0x74) = uVar3;
      *(uint *)(iVar6 + 0x78) = uVar4;
      FUN_016dd1aa(iVar6 + 0x7c,auStack_e0,0x44);
    }
    iVar8 = iVar8 + 0xc0;
    iVar9 = iVar9 + 0xc0;
    if (iVar8 == param_1 + param_2 * 0xc0) {
      return;
    }
  } while( true );
}

