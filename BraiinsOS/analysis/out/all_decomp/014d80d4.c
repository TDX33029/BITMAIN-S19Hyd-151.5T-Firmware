// FUN_014d80d4 @ 014d80d4 size=316 calls_out=1 calls_in=1
// strings: 

void FUN_014d80d4(uint *param_1,int param_2,uint *param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 local_8c;
  undefined4 local_88;
  undefined2 local_14;
  
  iVar1 = 0xb;
  if (0x80000012 < *param_3) {
    iVar1 = *param_3 + 0x7fffffed;
  }
  if (iVar1 == 3) {
    if (*(char *)(param_2 + 0x259) != '\0') {
      *(undefined1 *)(param_2 + 0x1cc) = 0x10;
      goto LAB_014d81f8;
    }
    local_14 = 4;
    local_88 = 0x100001;
    local_8c = 0x80000001;
    FUN_01525ed4(param_2,&local_8c,*(char *)(param_2 + 0x31) == '\x02');
  }
  else if (iVar1 == 6) {
    (**(code **)(param_5 + 0x1c))(param_4);
    local_14 = 4;
    local_88 = 0x20001;
    local_8c = 0x80000001;
    FUN_01525ed4(param_2,&local_8c,*(char *)(param_2 + 0x31) == '\x02');
  }
  else {
    if (iVar1 != 0x11) goto LAB_014d81f8;
    local_14 = 4;
    local_88 = 0x40001;
    local_8c = 0x80000001;
    FUN_01525ed4(param_2,&local_8c,*(char *)(param_2 + 0x31) == '\x02');
  }
  *(undefined1 *)(param_2 + 0x255) = 1;
LAB_014d81f8:
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  *param_1 = *param_3;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  uVar2 = param_3[5];
  uVar3 = param_3[6];
  uVar4 = param_3[7];
  param_1[4] = param_3[4];
  param_1[5] = uVar2;
  param_1[6] = uVar3;
  param_1[7] = uVar4;
  return;
}

