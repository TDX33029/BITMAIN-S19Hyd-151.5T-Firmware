// FUN_012cc54c @ 012cc54c size=364 calls_out=7 calls_in=1
// strings: IP address

void FUN_012cc54c(undefined1 *param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char *pcStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined2 local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  char local_38;
  undefined1 uStack_37;
  undefined1 uStack_36;
  uint uStack_35;
  
  uVar3 = *(uint *)(param_2 + 0x14);
  pcStack_58 = "IP address";
  uStack_54 = 10;
  if (uVar3 < *(uint *)(param_2 + 0x10)) {
    do {
      uVar5 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar3);
      uVar4 = uVar5 - 9;
      if ((0x17 < uVar4) || ((1 << (uVar4 & 0xff) & 0x800013U) == 0)) {
        if (uVar5 == 0x22) {
          *(undefined4 *)(param_2 + 8) = 0;
          *(uint *)(param_2 + 0x14) = uVar3 + 1;
          FUN_01968828(&local_44,(int *)(param_2 + 0xc),param_2);
          if (local_44 == 2) {
            uVar1 = 1;
            *(undefined4 *)(param_1 + 4) = local_40;
            goto LAB_012cc678;
          }
          FUN_01304dac(&local_38,local_40,local_3c);
          if (local_38 != '\x02') {
            param_1[3] = uStack_36;
            *(ushort *)(param_1 + 1) = CONCAT11(uStack_37,local_38);
            FUN_01bed4e2(&local_50,(uint)&local_38 | 7,10);
            *(uint *)(param_1 + 4) = uStack_35;
            *(undefined4 *)(param_1 + 8) = local_50;
            *(undefined4 *)(param_1 + 0xc) = uStack_4c;
            *(undefined2 *)(param_1 + 0x10) = local_48;
            uVar1 = 0;
            goto LAB_012cc678;
          }
          uVar2 = FUN_012cc468(uStack_37);
        }
        else {
          uVar2 = FUN_012c7788(param_2,&pcStack_58,&DAT_01ce2c2c);
        }
        uVar2 = FUN_0127dee8(uVar2,param_2);
        *(undefined4 *)(param_1 + 4) = uVar2;
        uVar1 = 1;
LAB_012cc678:
        *param_1 = uVar1;
        return;
      }
      uVar3 = uVar3 + 1;
      *(uint *)(param_2 + 0x14) = uVar3;
    } while (*(uint *)(param_2 + 0x10) != uVar3);
  }
  local_38 = '\x05';
  uStack_37 = 0;
  uStack_36 = 0;
  uStack_35 = uStack_35 & 0xffffff00;
  uVar2 = FUN_012c6b30(param_2,&local_38);
  *(undefined4 *)(param_1 + 4) = uVar2;
  *param_1 = 1;
  return;
}

