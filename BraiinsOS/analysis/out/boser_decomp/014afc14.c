// FUN_014afc14 @ 014afc14 size=284 calls_out=6 calls_in=1
// strings: 

void FUN_014afc14(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  
  iVar1 = FUN_0167459c(param_2);
  if (iVar1 == 0) {
    uVar2 = *(uint *)(param_2 + 0x14);
    if (uVar2 < *(uint *)(param_2 + 0x10)) {
      do {
        uVar3 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar2);
        uVar4 = uVar3 - 9;
        if ((0x17 < uVar4) || ((1 << (uVar4 & 0xff) & 0x800013U) == 0)) {
          if (uVar3 == 0x22) {
            *(uint *)(param_2 + 0x14) = uVar2 + 1;
            *(undefined4 *)(param_2 + 8) = 0;
            FUN_01968828(&local_24,param_2 + 0xc,param_2);
            if (local_24 == 2) {
              *param_1 = 0;
              param_1[1] = local_20;
              return;
            }
            FUN_0196ad08(&local_2c,local_20,local_1c);
            if (local_2c != 0) goto LAB_014afc3c;
          }
          else {
            local_28 = FUN_012c7788(param_2,&local_24,&DAT_01d271fc);
          }
          iVar1 = FUN_0127dee8(local_28,param_2);
          goto LAB_014afc34;
        }
        uVar2 = uVar2 + 1;
        *(uint *)(param_2 + 0x14) = uVar2;
      } while (*(uint *)(param_2 + 0x10) != uVar2);
    }
    local_24 = 5;
    iVar1 = FUN_012c6b30(param_2,&local_24);
  }
LAB_014afc34:
  local_2c = 0;
  local_28 = iVar1;
LAB_014afc3c:
  *param_1 = local_2c;
  param_1[1] = local_28;
  return;
}

