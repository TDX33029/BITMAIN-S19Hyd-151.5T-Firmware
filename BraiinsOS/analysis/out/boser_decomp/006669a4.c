// FUN_006669a4 @ 006669a4 size=1252 calls_out=4 calls_in=0
// strings: 

undefined4 FUN_006669a4(uint *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint local_58;
  undefined1 auStack_54 [20];
  undefined1 auStack_40 [28];
  
  uVar4 = param_1[3];
  uVar6 = 0;
  do {
    uVar1 = uVar6;
    if (uVar6 < 0xd) {
      uVar1 = 0xc;
    }
    do {
      uVar7 = uVar6;
      if (uVar1 == uVar7) {
        if ((char)*param_1 != '\x03') {
          uVar6 = *param_1;
          uVar4 = uVar6 >> 8;
          if ((uVar6 & 0xff) == 0) {
            FUN_01bed93e(auStack_40,0,0x17);
            uVar5 = 5;
            puVar3 = (&PTR_DAT_01d3090c)[uVar4 & 0xff];
          }
          else {
            if ((uVar6 & 0xff) == 1) {
              FUN_01bed93e(auStack_40,0,0x17);
              FUN_00666ecc(&local_58,auStack_40,&DAT_003d41bc,7);
            }
            else {
              FUN_01bed93e(auStack_40,0,0x17);
              FUN_00666ecc(&local_58,auStack_40,&DAT_003d41d1,7);
              FUN_00666f3c(auStack_40,&local_58,uVar4);
              FUN_00666ecc(&local_58,auStack_40,";",1);
              FUN_00666f3c(auStack_40,&local_58,uVar6 >> 0x10);
              FUN_00666ecc(&local_58,auStack_40,";",1);
              uVar4 = uVar6 >> 0x18;
            }
            FUN_00666f3c(auStack_40,&local_58,uVar4);
            uVar5 = 1;
            puVar3 = &DAT_004e9549;
          }
          FUN_00666ecc(&local_58,auStack_40,puVar3,uVar5);
          if (0x13 < local_58) goto LAB_00666e70;
          iVar2 = (**(code **)(param_3 + 0xc))(param_2,auStack_54);
          if (iVar2 != 0) {
            return 1;
          }
        }
        if ((char)param_1[1] != '\x03') {
          uVar6 = param_1[1];
          uVar4 = uVar6 >> 8;
          if ((uVar6 & 0xff) == 0) {
            FUN_01bed93e(auStack_40,0,0x17);
            puVar3 = (&PTR_DAT_01d3094c)[uVar4 & 0xff];
            uVar5 = *(undefined4 *)(&DAT_00534b38 + (uVar4 & 0xff) * 4);
          }
          else {
            if ((uVar6 & 0xff) == 1) {
              FUN_01bed93e(auStack_40,0,0x17);
              FUN_00666ecc(&local_58,auStack_40,&DAT_003d41b5,7);
            }
            else {
              FUN_01bed93e(auStack_40,0,0x17);
              FUN_00666ecc(&local_58,auStack_40,&DAT_003d41ca,7);
              FUN_00666f3c(auStack_40,&local_58,uVar4);
              FUN_00666ecc(&local_58,auStack_40,";",1);
              FUN_00666f3c(auStack_40,&local_58,uVar6 >> 0x10);
              FUN_00666ecc(&local_58,auStack_40,";",1);
              uVar4 = uVar6 >> 0x18;
            }
            FUN_00666f3c(auStack_40,&local_58,uVar4);
            uVar5 = 1;
            puVar3 = &DAT_004e9549;
          }
          FUN_00666ecc(&local_58,auStack_40,puVar3,uVar5);
          if (0x13 < local_58) goto LAB_00666e70;
          iVar2 = (**(code **)(param_3 + 0xc))(param_2,auStack_54);
          if (iVar2 != 0) {
            return 1;
          }
        }
        if ((char)param_1[2] == '\x03') {
          return 0;
        }
        uVar6 = param_1[2];
        uVar4 = uVar6 >> 8;
        if ((uVar6 & 0xff) < 2) {
          FUN_01bed93e(auStack_40,0,0x17);
          FUN_00666ecc(&local_58,auStack_40,&DAT_003d41c3,7);
        }
        else {
          FUN_01bed93e(auStack_40,0,0x17);
          FUN_00666ecc(&local_58,auStack_40,&DAT_003d41d8,7);
          FUN_00666f3c(auStack_40,&local_58,uVar4);
          FUN_00666ecc(&local_58,auStack_40,";",1);
          FUN_00666f3c(auStack_40,&local_58,uVar6 >> 0x10);
          FUN_00666ecc(&local_58,auStack_40,";",1);
          uVar4 = uVar6 >> 0x18;
        }
        FUN_00666f3c(auStack_40,&local_58,uVar4);
        FUN_00666ecc(&local_58,auStack_40,&DAT_004e9549,1);
        if (local_58 < 0x14) {
          uVar5 = (**(code **)(param_3 + 0xc))(param_2,auStack_54);
          return uVar5;
        }
LAB_00666e70:
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,local_58,0x13,&DAT_01c03fe0);
      }
      uVar6 = uVar7 + 1;
    } while (((ushort)uVar4 >> (uVar7 & 0xff) & 1) == 0);
    iVar2 = (**(code **)(param_3 + 0xc))
                      (param_2,(&DAT_01c03ef8)[uVar7 * 4],(&DAT_01c03efc)[uVar7 * 4]);
    if (iVar2 != 0) {
      return 1;
    }
  } while( true );
}

