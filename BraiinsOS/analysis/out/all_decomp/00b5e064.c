// FUN_00b5e064 @ 00b5e064 size=256 calls_out=1 calls_in=1
// strings: 

void FUN_00b5e064(undefined4 *param_1,int param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  puVar3 = param_1 + 0xe;
  iVar5 = 0;
  do {
    cVar1 = FUN_010e1310(puVar3,puVar3 + -0xe);
    if (cVar1 == -1) {
      local_60 = *puVar3;
      uStack_5c = puVar3[1];
      uStack_58 = puVar3[2];
      uStack_54 = puVar3[3];
      local_50 = puVar3[4];
      uStack_4c = puVar3[5];
      uStack_48 = puVar3[6];
      uStack_44 = puVar3[7];
      uStack_40 = puVar3[8];
      local_3c = puVar3[9];
      uStack_38 = puVar3[10];
      uStack_34 = puVar3[0xb];
      uStack_30 = puVar3[0xc];
      uStack_2c = puVar3[0xd];
      puVar2 = puVar3;
      iVar6 = iVar5;
      do {
        puVar4 = puVar2 + -0xe;
        *puVar2 = *puVar4;
        puVar2[1] = puVar2[-0xd];
        puVar2[2] = puVar2[-0xc];
        puVar2[3] = puVar2[-0xb];
        puVar2[4] = puVar2[-10];
        puVar2[5] = puVar2[-9];
        puVar2[6] = puVar2[-8];
        puVar2[7] = puVar2[-7];
        puVar2[8] = puVar2[-6];
        puVar2[9] = puVar2[-5];
        puVar2[10] = puVar2[-4];
        puVar2[0xb] = puVar2[-3];
        puVar2[0xc] = puVar2[-2];
        puVar2[0xd] = puVar2[-1];
        if (iVar6 == 0) {
          puVar4 = param_1;
          break;
        }
        cVar1 = FUN_010e1310(&local_60,puVar2 + -0x1c);
        iVar6 = iVar6 + 0x38;
        puVar2 = puVar4;
      } while (cVar1 == -1);
      *puVar4 = local_60;
      puVar4[1] = uStack_5c;
      puVar4[2] = uStack_58;
      puVar4[3] = uStack_54;
      puVar4[4] = local_50;
      puVar4[5] = uStack_4c;
      puVar4[6] = uStack_48;
      puVar4[7] = uStack_44;
      puVar4[8] = uStack_40;
      puVar4[9] = local_3c;
      puVar4[10] = uStack_38;
      puVar4[0xb] = uStack_34;
      puVar4[0xc] = uStack_30;
      puVar4[0xd] = uStack_2c;
    }
    puVar3 = puVar3 + 0xe;
    iVar5 = iVar5 + -0x38;
    if (puVar3 == param_1 + param_2 * 0xe) {
      return;
    }
  } while( true );
}

