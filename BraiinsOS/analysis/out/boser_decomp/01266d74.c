// FUN_01266d74 @ 01266d74 size=304 calls_out=3 calls_in=1
// strings: 

void FUN_01266d74(undefined2 *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  undefined4 uVar4;
  bool bVar5;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (param_3 == 3) {
    if (*param_2 == 0x46) {
      bVar1 = param_2[1];
      bVar5 = bVar1 == 0x61;
      if (bVar5) {
        bVar1 = param_2[2];
      }
      if (bVar5 && bVar1 == 0x6e) {
        uVar2 = 0x100;
LAB_01266e9c:
        *param_1 = uVar2;
        return;
      }
    }
  }
  else if (param_3 == 4) {
    bVar1 = *param_2;
    bVar5 = bVar1 == 0x43;
    if (bVar5) {
      bVar1 = param_2[1];
    }
    if (bVar5 && bVar1 == 0x68) {
      bVar1 = param_2[2];
      bVar5 = bVar1 == 0x69;
      if (bVar5) {
        bVar1 = param_2[3];
      }
      if (bVar5 && bVar1 == 0x70) {
        uVar2 = 0x200;
        goto LAB_01266e9c;
      }
    }
  }
  else {
    puVar3 = param_1;
    if (param_3 == 9) {
      puVar3 = (undefined2 *)(uint)*param_2;
    }
    if (param_3 == 9 && puVar3 == (undefined2 *)&DAT_00000048) {
      bVar1 = param_2[1];
      bVar5 = bVar1 == 0x61;
      if (bVar5) {
        bVar1 = param_2[2];
      }
      if (bVar5 && bVar1 == 0x73) {
        bVar1 = param_2[3];
        bVar5 = bVar1 == 0x68;
        if (bVar5) {
          bVar1 = param_2[4];
        }
        if (bVar5 && bVar1 == 0x62) {
          bVar1 = param_2[5];
          bVar5 = bVar1 == 0x6f;
          if (bVar5) {
            bVar1 = param_2[6];
          }
          if (bVar5 && bVar1 == 0x61) {
            bVar1 = param_2[7];
            bVar5 = bVar1 == 0x72;
            if (bVar5) {
              bVar1 = param_2[8];
            }
            if (bVar5 && bVar1 == 100) {
              uVar2 = 0;
              goto LAB_01266e9c;
            }
          }
        }
      }
    }
  }
  FUN_006643f0(&local_1c);
  uVar4 = FUN_01265080(local_18,local_14,&DAT_01c2531c,3);
  *(undefined1 *)param_1 = 1;
  *(undefined4 *)(param_1 + 2) = uVar4;
  if (local_1c != -0x80000000) {
    FUN_019bb7e0(local_1c,local_18);
  }
  return;
}

