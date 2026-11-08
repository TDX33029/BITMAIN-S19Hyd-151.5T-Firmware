// FUN_01a4cb48 @ 01a4cb48 size=216 calls_out=2 calls_in=2
// strings: 

void FUN_01a4cb48(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined1 auStack_e0 [72];
  undefined1 auStack_98 [120];
  
  uVar4 = *(uint *)(param_2 + -0x48);
  uVar5 = *(undefined4 *)(param_2 + 0x74);
  uVar6 = *(uint *)(param_2 + 0x78);
  uVar1 = uVar4;
  if (uVar6 < uVar4) {
    uVar1 = uVar6;
  }
  uVar1 = FUN_01bed842(uVar5,*(undefined4 *)(param_2 + -0x4c),uVar1);
  if (uVar1 == 0) {
    uVar1 = uVar6 - uVar4;
  }
  if (0x7fffffff < uVar1) {
    FUN_01bed4e2(auStack_98,param_2,0x74);
    FUN_01bed4e2(auStack_e0,param_2 + 0x7c,0x44);
    do {
      iVar3 = param_2;
      param_2 = iVar3 + -0xc0;
      FUN_01bed4e2(iVar3,param_2,0xc0);
      if (param_2 == param_1) break;
      uVar4 = *(uint *)(iVar3 + -0x108);
      uVar1 = uVar4;
      if (uVar6 < uVar4) {
        uVar1 = uVar6;
      }
      iVar2 = FUN_01bed842(uVar5,*(undefined4 *)(iVar3 + -0x10c),uVar1);
      if (iVar2 == 0) {
        iVar2 = uVar6 - uVar4;
      }
    } while (iVar2 < 0);
    FUN_01bed4e2(iVar3 + -0xc0,auStack_98,0x74);
    *(undefined4 *)(iVar3 + -0x4c) = uVar5;
    *(uint *)(iVar3 + -0x48) = uVar6;
    FUN_01bed4e2(iVar3 + -0x44,auStack_e0,0x44);
  }
  return;
}

