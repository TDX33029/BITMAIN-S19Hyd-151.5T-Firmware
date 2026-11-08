// FUN_01a6812c @ 01a6812c size=584 calls_out=9 calls_in=63
// strings: grpc-encoding | grpc-accept-encodinggrpc-message-type

void FUN_01a6812c(undefined4 *param_1,undefined4 param_2)

{
  byte bVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  byte *pbStack_cc;
  int iStack_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  int local_b8;
  undefined4 uStack_b4;
  undefined4 auStack_b0 [24];
  byte *local_50;
  undefined4 local_4c;
  byte **local_48;
  undefined2 *local_44;
  undefined4 uStack_40;
  undefined1 auStack_3c [4];
  char local_38;
  byte **local_30;
  undefined1 *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20;
  
  uVar2 = FUN_01ac3400(param_2,"grpc-encoding",0xd);
  if (uVar2 == 0) {
LAB_01a6834c:
    *param_1 = 3;
    param_1[1] = 0;
  }
  else {
    pbStack_cc = *(byte **)(uVar2 + 4);
    iStack_c8 = *(int *)(uVar2 + 8);
    bVar6 = iStack_c8 == 8;
    if (bVar6) {
      uVar2 = (uint)*pbStack_cc;
    }
    bVar7 = bVar6 && uVar2 == 0x69;
    if (bVar6 && uVar2 == 0x69) {
      bVar7 = pbStack_cc[1] == 100;
    }
    if (bVar7) {
      bVar1 = pbStack_cc[2];
      bVar6 = bVar1 == 0x65;
      if (bVar6) {
        bVar1 = pbStack_cc[3];
      }
      if (bVar6 && bVar1 == 0x6e) {
        bVar1 = pbStack_cc[4];
        bVar6 = bVar1 == 0x74;
        if (bVar6) {
          bVar1 = pbStack_cc[5];
        }
        if (bVar6 && bVar1 == 0x69) {
          bVar1 = pbStack_cc[6];
          bVar6 = bVar1 == 0x74;
          if (bVar6) {
            bVar1 = pbStack_cc[7];
          }
          if (bVar6 && bVar1 == 0x79) goto LAB_01a6834c;
        }
      }
    }
    FUN_012fbd94(&local_b8,pbStack_cc,iStack_c8);
    if (local_b8 == 0) {
      puVar3 = auStack_b0;
      puVar4 = &uStack_b4;
    }
    else {
      local_30 = &pbStack_cc;
      puVar3 = &local_bc;
      puVar4 = &local_c0;
      local_2c = &LAB_0141634c;
      FUN_00664898(&local_c4,&DAT_00590e5f,&local_30);
    }
    local_4c = *puVar3;
    local_50 = (byte *)*puVar4;
    local_48 = &local_50;
    local_44 = &DAT_0132b6a0;
    FUN_00664898(&local_30,&DAT_0057c0df,&local_48);
    local_48 = local_30;
    local_44 = (undefined2 *)local_2c;
    uStack_40 = local_28;
    FUN_01a70fd4(&local_b8,0xc,&local_48);
    iVar5 = 0;
    local_24 = 1;
    local_30 = (byte **)0x1;
    local_28 = 0;
    local_2c = (undefined1 *)0x0;
    FUN_012840cc(&local_30);
    do {
      if (((byte)(&DAT_00570440)[iVar5] != 9) && (0x5e < (byte)(&DAT_00570440)[iVar5] - 0x20)) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(0,0,&DAT_01d2e4bc);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 != 8);
    local_20 = 0;
    local_24 = 0;
    local_28 = 8;
    local_2c = &DAT_00570440;
    local_30 = (byte **)&DAT_01d2d23c;
    FUN_01a68498(&local_48,&local_b8,"grpc-accept-encodinggrpc-message-type",0x14,&local_30);
    if (local_38 != '\x02') {
      (*(code *)local_48[4])(auStack_3c,local_44,uStack_40);
    }
    FUN_01bed4e2(param_1,&local_b8,0x68);
    if (local_b8 != 0) {
      FUN_019bb7e0(local_c4,local_c0);
    }
  }
  return;
}

