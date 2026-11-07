// FUN_00712ff0 @ 00712ff0 size=376 calls_out=4 calls_in=2
// strings: 

void FUN_00712ff0(undefined4 *param_1,uint *param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  uint local_108;
  uint local_104;
  undefined1 auStack_100 [136];
  undefined1 auStack_78 [84];
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  while( true ) {
    iVar3 = 0;
    if ((uint)(uVar1 < 4) <= -uVar2) {
      iVar3 = uVar1 - 3;
    }
    if (iVar3 != 0) break;
    iVar3 = (**(code **)(param_2[0x25] + 0xc))(param_2[0x24],param_3);
    if (iVar3 != 0) goto LAB_007130e8;
    uVar1 = *param_2;
    uVar2 = param_2[1];
    *param_2 = 3;
    param_2[1] = 0;
    if (uVar1 == 3 && uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c(&DAT_0050d999,0xe,&DAT_01d1f160);
    }
    local_108 = uVar1;
    local_104 = uVar2;
    FUN_01bed4e2(auStack_100,param_2 + 2,0x88);
    uVar4 = (**(code **)(param_2[0x25] + 0x10))(param_2[0x24],&local_108);
    FUN_007131b4(param_2);
    uVar1 = 4;
    uVar2 = 0;
    *param_2 = 4;
    param_2[1] = 0;
    *(undefined8 *)(param_2 + 2) = uVar4;
  }
  if (iVar3 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_01979f74(&DAT_0050d9a7,0x15,&DAT_01d1f170);
  }
  (**(code **)(param_2[3] + 0xc))(&local_108,param_2[2],param_3);
  if (local_108 != 3 || local_104 != 0) {
    FUN_01bed4e2(auStack_78,&local_108,0x50);
    FUN_007131b4(param_2);
    *param_2 = 5;
    param_2[1] = 0;
    FUN_01bed4e2(param_1,auStack_78,0x50);
    return;
  }
LAB_007130e8:
  *param_1 = 3;
  param_1[1] = 0;
  return;
}

