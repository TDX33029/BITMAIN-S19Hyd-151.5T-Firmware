// FUN_01278570 @ 01278570 size=432 calls_out=6 calls_in=2
// strings: 

void FUN_01278570(undefined2 *param_1,int param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int local_58;
  int iStack_54;
  uint local_50 [2];
  int local_48;
  int local_44;
  uint auStack_40 [2];
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined1 uStack_21;
  
  uVar4 = *(uint *)(param_2 + 0x14);
  if (uVar4 < *(uint *)(param_2 + 0x10)) {
    puVar6 = auStack_40;
    do {
      uVar5 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar4);
      if ((0x17 < uVar5 - 9) || ((1 << (uVar5 - 9 & 0xff) & 0x800013U) == 0)) {
        if (uVar5 == 0x2d) {
          *(uint *)(param_2 + 0x14) = uVar4 + 1;
          FUN_012c751c(&local_58,param_2,0);
          puVar6 = local_50;
LAB_0127863c:
          if (local_58 == 3 && iStack_54 == 0) {
            uVar4 = *puVar6;
            goto LAB_0127864c;
          }
          if (local_58 == 1) {
            uVar4 = *puVar6;
            uVar5 = puVar6[1];
            if (uVar5 == 0 && (0xffff < uVar4) <= uVar5) {
LAB_0127869c:
              param_1[1] = (short)uVar4;
              uVar2 = 0;
              goto LAB_012786a4;
            }
            uVar1 = 1;
          }
          else {
            if (local_58 != 2) {
              local_30 = *(undefined8 *)puVar6;
              local_38[0] = CONCAT31(local_38[0]._1_3_,3);
              uVar3 = FUN_01967538(local_38,&uStack_21,&DAT_01c258c0);
              goto LAB_012786fc;
            }
            uVar4 = *puVar6;
            uVar5 = puVar6[1];
            if (uVar5 == 0 && (0xffff < uVar4) <= uVar5) goto LAB_0127869c;
            uVar1 = 2;
          }
          local_38[0] = CONCAT31(local_38[0]._1_3_,uVar1);
          local_30 = CONCAT44(uVar5,uVar4);
          uVar3 = FUN_01967740(local_38,&uStack_21,&DAT_01c258c0);
        }
        else {
          if (uVar5 - 0x30 < 10) {
            FUN_012c751c(&local_48,param_2,1);
            local_58 = local_48;
            iStack_54 = local_44;
            goto LAB_0127863c;
          }
          uVar3 = FUN_012c7788(param_2,&uStack_21,&DAT_01c258c0);
        }
LAB_012786fc:
        uVar4 = FUN_0127dee8(uVar3,param_2);
        goto LAB_0127864c;
      }
      uVar4 = uVar4 + 1;
      *(uint *)(param_2 + 0x14) = uVar4;
    } while (*(uint *)(param_2 + 0x10) != uVar4);
  }
  local_38[0] = 5;
  uVar4 = FUN_012c6b30(param_2,local_38);
LAB_0127864c:
  *(uint *)(param_1 + 2) = uVar4;
  uVar2 = 1;
LAB_012786a4:
  *param_1 = uVar2;
  return;
}

