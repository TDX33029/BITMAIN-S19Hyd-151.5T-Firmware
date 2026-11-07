// FUN_00f4d9f8 @ 00f4d9f8 size=360 calls_out=6 calls_in=1
// strings: 

void FUN_00f4d9f8(undefined1 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 extraout_r1;
  undefined1 uVar3;
  int extraout_r2;
  uint uVar4;
  uint uVar5;
  int local_24;
  int *piStack_20;
  int local_1c;
  
  uVar4 = *(uint *)(param_2 + 0x14);
  if (uVar4 < *(uint *)(param_2 + 0x10)) {
    do {
      uVar5 = *(byte *)(*(int *)(param_2 + 0xc) + uVar4) - 9;
      if (0x19 < uVar5) {
LAB_00f4db30:
        uVar1 = FUN_00f4db6c(param_2,&local_24,&DAT_0187f268);
LAB_00f4db44:
        uVar1 = FUN_011257e4(uVar1,param_2);
        *(undefined4 *)(param_1 + 4) = uVar1;
        *param_1 = 1;
        return;
      }
      if ((1 << (uVar5 & 0xff) & 0x800013U) == 0) {
        if (uVar5 == 0x19) {
          *(undefined4 *)(param_2 + 8) = 0;
          *(uint *)(param_2 + 0x14) = uVar4 + 1;
          FUN_0157e5fc(&local_24,(int *)(param_2 + 0xc),param_2);
          if (local_24 == 2) {
            *(int **)(param_1 + 4) = piStack_20;
            *param_1 = 1;
            return;
          }
          if (local_1c == 0xf) {
            iVar2 = thunk_FUN_016dd50a(piStack_20,&DAT_0035c48b,0xf);
            uVar3 = 0;
            if (iVar2 == 0) {
LAB_00f4dae8:
              param_1[1] = uVar3;
              *param_1 = 0;
              return;
            }
          }
          else {
            iVar2 = extraout_r2;
            uVar3 = extraout_r1;
            if (local_1c == 4) {
              local_24 = *piStack_20;
              uVar3 = 1;
              iVar2 = 0x676e6970;
            }
            if (local_1c == 4 && local_24 == iVar2) goto LAB_00f4dae8;
          }
          uVar1 = FUN_00f5681c(piStack_20,local_1c,&DAT_0187f450);
          goto LAB_00f4db44;
        }
        goto LAB_00f4db30;
      }
      uVar4 = uVar4 + 1;
      *(uint *)(param_2 + 0x14) = uVar4;
    } while (*(uint *)(param_2 + 0x10) != uVar4);
  }
  local_24 = 5;
  uVar1 = FUN_01143ab8(param_2,&local_24);
  *(undefined4 *)(param_1 + 4) = uVar1;
  *param_1 = 1;
  return;
}

