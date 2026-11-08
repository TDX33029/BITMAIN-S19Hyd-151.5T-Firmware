// FUN_01ab0338 @ 01ab0338 size=400 calls_out=6 calls_in=2
// strings: 

void FUN_01ab0338(int param_1,uint *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  
  puVar7 = (uint *)(param_1 + 0x144);
  uVar8 = *puVar7;
  if (*param_2 < *(uint *)(param_1 + 0x148)) {
    *(uint *)(param_1 + 0x148) = *param_2;
  }
  if (uVar8 < 9) {
    iVar5 = param_1 + 4;
    uVar3 = uVar8;
  }
  else {
    iVar5 = *(int *)(param_1 + 8);
    uVar3 = *(uint *)(param_1 + 4);
  }
  if (uVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    if (uVar3 != 1) {
      uVar4 = 0;
      do {
        uVar2 = uVar4 + (uVar3 >> 1);
        cVar1 = FUN_01ab6068(iVar5 + uVar2 * 0x28,param_2);
        if (cVar1 == '\x01') {
          uVar2 = uVar4;
        }
        uVar3 = uVar3 - (uVar3 >> 1);
        uVar4 = uVar2;
      } while (1 < uVar3);
    }
    cVar1 = FUN_01ab6068(iVar5 + uVar2 * 0x28,param_2);
    if (cVar1 == '\0') {
      if (uVar8 < 9) {
        iVar5 = param_1 + 4;
      }
      else {
        iVar5 = *(int *)(param_1 + 8);
        uVar8 = *(uint *)(param_1 + 4);
      }
      if (uVar8 <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar2,uVar8,&DAT_01d2eba8);
      }
      puVar6 = (uint *)(iVar5 + uVar2 * 0x28);
      FUN_01ab0534(puVar6);
      goto LAB_01ab046c;
    }
    if (cVar1 == -1) {
      uVar2 = uVar2 + 1;
    }
  }
  if (uVar8 < 9) {
    iVar5 = param_1 + 4;
    uVar8 = 8;
  }
  else {
    iVar5 = *(int *)(param_1 + 8);
    puVar7 = (uint *)(param_1 + 4);
  }
  uVar3 = *puVar7;
  if (uVar3 == uVar8) {
    FUN_01ab19d0(param_1);
    puVar7 = (uint *)(param_1 + 4);
    uVar3 = *puVar7;
    iVar5 = *(int *)(param_1 + 8);
  }
  if (uVar3 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec(&DAT_0053151f,0x14,&DAT_01d2ebf8);
  }
  puVar6 = (uint *)(iVar5 + uVar2 * 0x28);
  if (uVar2 < uVar3) {
    FUN_01bed864(puVar6 + 10,puVar6,(uVar3 - uVar2) * 0x28);
  }
  *puVar7 = uVar3 + 1;
LAB_01ab046c:
  uVar8 = param_2[1];
  uVar3 = param_2[2];
  uVar2 = param_2[3];
  uVar4 = param_2[4];
  *puVar6 = *param_2;
  puVar6[1] = uVar8;
  puVar6[2] = uVar3;
  puVar6[3] = uVar2;
  puVar6[4] = uVar4;
  uVar8 = param_2[6];
  uVar3 = param_2[7];
  uVar2 = param_2[8];
  uVar4 = param_2[9];
  puVar6[5] = param_2[5];
  puVar6[6] = uVar8;
  puVar6[7] = uVar3;
  puVar6[8] = uVar2;
  puVar6[9] = uVar4;
  return;
}

