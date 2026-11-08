// FUN_01ab05d8 @ 01ab05d8 size=404 calls_out=6 calls_in=4
// strings: 

void FUN_01ab05d8(int param_1,uint *param_2)

{
  char cVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  
  puVar8 = (uint *)(param_1 + 0xe4);
  uVar5 = *puVar8;
  if (*param_2 < *(uint *)(param_1 + 0xe8)) {
    *(uint *)(param_1 + 0xe8) = *param_2;
  }
  if (uVar5 < 9) {
    iVar6 = param_1 + 4;
    uVar7 = uVar5;
  }
  else {
    iVar6 = *(int *)(param_1 + 8);
    uVar7 = *(uint *)(param_1 + 4);
  }
  if (uVar7 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    if (uVar7 != 1) {
      uVar4 = 0;
      do {
        uVar3 = uVar4 + (uVar7 >> 1);
        cVar1 = FUN_01ab07bc(iVar6 + uVar3 * 0x1c,param_2);
        if (cVar1 == '\x01') {
          uVar3 = uVar4;
        }
        uVar7 = uVar7 - (uVar7 >> 1);
        uVar4 = uVar3;
      } while (1 < uVar7);
    }
    cVar1 = FUN_01ab07bc(iVar6 + uVar3 * 0x1c,param_2);
    if (cVar1 == '\0') {
      if (uVar5 < 9) {
        param_1 = param_1 + 4;
      }
      else {
        uVar5 = *(uint *)(param_1 + 4);
        param_1 = *(int *)(param_1 + 8);
      }
      if (uVar5 <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar3,uVar5,&DAT_01d2eba8);
      }
      puVar2 = (uint *)(param_1 + uVar3 * 0x1c);
      FUN_01ab0798(puVar2);
      goto LAB_01ab0710;
    }
    if (cVar1 == -1) {
      uVar3 = uVar3 + 1;
    }
  }
  if (uVar5 < 9) {
    iVar6 = param_1 + 4;
    uVar5 = 8;
  }
  else {
    iVar6 = *(int *)(param_1 + 8);
    puVar8 = (uint *)(param_1 + 4);
  }
  uVar7 = *puVar8;
  if (uVar7 == uVar5) {
    FUN_01ab1dd8(param_1);
    puVar8 = (uint *)(param_1 + 4);
    uVar7 = *puVar8;
    iVar6 = *(int *)(param_1 + 8);
  }
  if (uVar7 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec(&DAT_0053151f,0x14,&DAT_01d2ebf8);
  }
  puVar2 = (uint *)(iVar6 + uVar3 * 0x1c);
  if (uVar3 < uVar7) {
    FUN_01bed864(puVar2 + 7,puVar2,(uVar7 - uVar3) * 0x1c);
  }
  *puVar8 = uVar7 + 1;
LAB_01ab0710:
  uVar5 = param_2[1];
  uVar7 = param_2[2];
  *puVar2 = *param_2;
  puVar2[1] = uVar5;
  puVar2[2] = uVar7;
  uVar5 = param_2[4];
  uVar7 = param_2[5];
  uVar3 = param_2[6];
  puVar2[3] = param_2[3];
  puVar2[4] = uVar5;
  puVar2[5] = uVar7;
  puVar2[6] = uVar3;
  return;
}

