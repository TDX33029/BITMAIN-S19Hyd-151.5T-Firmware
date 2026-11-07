// FUN_01a64ce0 @ 01a64ce0 size=328 calls_out=5 calls_in=1
// strings: assertion failed: k <= self.len()

uint FUN_01a64ce0(int param_1,uint param_2)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  undefined1 auStack_70 [76];
  
  if (*(uint *)(param_1 + 0x34) <= param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(param_2,*(uint *)(param_1 + 0x34),&DAT_01d2cb38);
  }
  iVar6 = param_2 * 0x4c + *(int *)(param_1 + 0x30);
  uVar7 = 0;
  uVar3 = *(int *)(iVar6 + 0x44) + 1;
  *(uint *)(iVar6 + 0x44) = uVar3;
  if (param_2 != 0) {
    uVar4 = param_2;
    do {
      if (uVar3 <= *(uint *)(iVar6 + -8)) {
        uVar7 = uVar4;
        break;
      }
      iVar2 = iVar6 + -0x4c;
      uVar4 = uVar4 - 1;
      FUN_01bed4e2(auStack_70,iVar2,0x4c);
      FUN_01bed4e2(iVar2,iVar6,0x4c);
      FUN_01bed4e2(iVar6,auStack_70,0x4c);
      iVar6 = iVar2;
    } while (uVar4 != 0);
  }
  if (param_2 == uVar7) {
    return uVar7;
  }
  if (param_2 < *(uint *)(param_1 + 0x28)) {
    uVar3 = param_2 + 1;
    if (uVar7 <= uVar3) {
      if (uVar3 == uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("assertion failed: k <= self.len()",0x21,&DAT_01d2ccd8);
      }
      iVar6 = *(int *)(param_1 + 0x24);
      puVar5 = (undefined1 *)(iVar6 + uVar7);
      if (param_2 - uVar7 == 1) {
        uVar1 = *(undefined1 *)(iVar6 + param_2);
        puVar5[1] = *puVar5;
        *puVar5 = uVar1;
        return uVar7;
      }
      uVar1 = *(undefined1 *)(iVar6 + param_2);
      FUN_01bed864(puVar5 + 1,puVar5);
      *puVar5 = uVar1;
      return uVar7;
    }
  }
  else {
    uVar3 = param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012faff4(uVar7,uVar3,*(uint *)(param_1 + 0x28),&DAT_01d2cb48);
}

