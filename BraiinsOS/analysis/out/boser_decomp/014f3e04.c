// FUN_014f3e04 @ 014f3e04 size=248 calls_out=3 calls_in=0
// strings: 

void FUN_014f3e04(undefined2 *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  undefined4 uVar4;
  bool bVar5;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (param_3 == 9) {
    if (*param_2 == 0x69) {
      bVar1 = param_2[1];
      bVar5 = bVar1 == 0x6e;
      if (bVar5) {
        bVar1 = param_2[2];
      }
      if (bVar5 && bVar1 == 0x74) {
        bVar1 = param_2[3];
        bVar5 = bVar1 == 0x65;
        if (bVar5) {
          bVar1 = param_2[4];
        }
        if (bVar5 && bVar1 == 0x67) {
          bVar1 = param_2[5];
          bVar5 = bVar1 == 0x72;
          if (bVar5) {
            bVar1 = param_2[6];
          }
          if (bVar5 && bVar1 == 0x69) {
            bVar1 = param_2[7];
            bVar5 = bVar1 == 0x74;
            if (bVar5) {
              bVar1 = param_2[8];
            }
            if (bVar5 && bVar1 == 0x79) {
              uVar2 = 0x100;
              goto LAB_014f3ef4;
            }
          }
        }
      }
    }
  }
  else {
    puVar3 = param_1;
    if (param_3 == 3) {
      puVar3 = (undefined2 *)(uint)*param_2;
    }
    if (param_3 == 3 && puVar3 == (undefined2 *)0x75) {
      bVar1 = param_2[1];
      bVar5 = bVar1 == 0x72;
      if (bVar5) {
        bVar1 = param_2[2];
      }
      if (bVar5 && bVar1 == 0x6c) {
        uVar2 = 0;
LAB_014f3ef4:
        *param_1 = uVar2;
        return;
      }
    }
  }
  FUN_006643f0(&local_1c);
  uVar4 = FUN_014dedb0(local_18,local_14,&DAT_01cfa4a4,2);
  *(undefined1 *)param_1 = 1;
  *(undefined4 *)(param_1 + 2) = uVar4;
  if (local_1c != -0x80000000) {
    FUN_019bb7e0(local_1c,local_18);
  }
  return;
}

