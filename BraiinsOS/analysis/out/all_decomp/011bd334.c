// FUN_011bd334 @ 011bd334 size=360 calls_out=1 calls_in=6
// strings: 

void FUN_011bd334(undefined1 *param_1,int *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 local_24 [3];
  
  iVar6 = *param_2;
  uVar3 = *(uint *)(iVar6 + 0x10);
  uVar4 = *(uint *)(iVar6 + 0x14);
  if (uVar4 < uVar3) {
    do {
      uVar2 = (uint)*(byte *)(*(int *)(iVar6 + 0xc) + uVar4);
      if ((0x17 < uVar2 - 9) || ((1 << (uVar2 - 9 & 0xff) & 0x800013U) == 0)) {
        if (uVar2 == 0x7d) {
          param_1[1] = 0;
          *param_1 = 0;
          return;
        }
        if ((char)param_2[1] != '\0') {
          *(undefined1 *)(param_2 + 1) = 0;
          if (uVar2 == 0x22) {
            param_1[1] = 1;
            *param_1 = 0;
            return;
          }
          local_24[0] = 0x11;
          goto LAB_011bd394;
        }
        if (uVar2 != 0x2c) {
          local_24[0] = 8;
          goto LAB_011bd394;
        }
        uVar4 = uVar4 + 1;
        *(uint *)(iVar6 + 0x14) = uVar4;
        if (uVar3 <= uVar4) goto LAB_011bd448;
        goto LAB_011bd420;
      }
      uVar4 = uVar4 + 1;
      *(uint *)(iVar6 + 0x14) = uVar4;
    } while (uVar3 != uVar4);
  }
  local_24[0] = 3;
  goto LAB_011bd394;
  while( true ) {
    if ((1 << (uVar5 & 0xff) & 0x800013U) == 0) {
      if (uVar5 == 0x19) {
        param_1[1] = 1;
        *param_1 = 0;
        return;
      }
      goto LAB_011bd470;
    }
    uVar4 = uVar4 + 1;
    *(uint *)(iVar6 + 0x14) = uVar4;
    if (uVar3 == uVar4) break;
LAB_011bd420:
    uVar2 = (uint)*(byte *)(*(int *)(iVar6 + 0xc) + uVar4);
    uVar5 = uVar2 - 9;
    if (0x19 < uVar5) {
LAB_011bd470:
      if (uVar2 == 0x7d) {
        local_24[0] = 0x15;
      }
      else {
        local_24[0] = 0x11;
      }
      goto LAB_011bd394;
    }
  }
LAB_011bd448:
  local_24[0] = 5;
LAB_011bd394:
  uVar1 = FUN_00c629ac(iVar6,local_24);
  *(undefined4 *)(param_1 + 4) = uVar1;
  *param_1 = 1;
  return;
}

