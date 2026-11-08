// FUN_0003dc38 @ 0003dc38  size=376
// callers: []

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003dc38(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int local_2030;
  undefined4 local_202c;
  undefined4 local_2028;
  undefined4 local_2024;
  char local_2020 [4];
  char acStack_201c [4];
  char acStack_2018 [4];
  char acStack_2014 [4];
  char local_2010 [4];
  char acStack_200c [4];
  char acStack_2008 [4];
  char acStack_2004 [4];
  char local_2000 [4];
  char acStack_1ffc [4];
  char acStack_1ff8 [4];
  undefined1 local_1ff4;
  
  uVar2 = FUN_0006c30c();
  uVar6 = 0;
  FUN_0006c338(uVar2 | 0x10000);
  prctl(0xf,"nonce_reg_process",0,0,0);
LAB_0003dc84:
  uVar2 = FUN_0006b9c4();
  if (uVar2 == 1) goto LAB_0003dd50;
  do {
    uVar2 = uVar2 >> 1;
    if (uVar2 != 0) {
      uVar6 = 0;
      do {
        while( true ) {
          FUN_0006ba4c(&local_2030);
          iVar3 = 1;
          iVar5 = 3;
          iVar4 = 2;
          uVar7 = DAT_000c74c8 + 4;
          if (uVar7 < 0x2a9) {
            iVar3 = DAT_000c74c8 + 1;
            iVar4 = DAT_000c74c8 + 2;
            iVar5 = DAT_000c74c8 + 3;
          }
          else {
            uVar7 = 4;
            DAT_000c74c8 = 0;
          }
          piVar1 = &DAT_000c74cc + DAT_000c74c8;
          DAT_000c74c8 = uVar7;
          *piVar1 = local_2030;
          (&DAT_000c74cc)[iVar3] = local_202c;
          (&DAT_000c74cc)[iVar4] = local_2028;
          (&DAT_000c74cc)[iVar5] = local_2024;
          if (-1 < local_2030) break;
          uVar6 = uVar6 + 1;
          FUN_00046a48();
          if (uVar2 == uVar6) goto LAB_0003dd38;
        }
        uVar6 = uVar6 + 1;
        FUN_00046e6c(&local_2030);
      } while (uVar2 != uVar6);
    }
LAB_0003dd38:
    uVar6 = 0;
    while( true ) {
      FUN_0004bf68(1);
      uVar2 = FUN_0006b9c4();
      if (uVar2 != 1) break;
LAB_0003dd50:
      uVar6 = uVar6 + 1;
      if (1 < uVar6) {
        uVar2 = FUN_0006c30c();
        FUN_0006c338(uVar2 | 0x10000);
        if (3 < DAT_000be63c) {
          local_2020[0] = s_nonce_fifo_flush_because_of_misa_000a0210[0];
          local_2020[1] = s_nonce_fifo_flush_because_of_misa_000a0210[1];
          local_2020[2] = s_nonce_fifo_flush_because_of_misa_000a0210[2];
          local_2020[3] = s_nonce_fifo_flush_because_of_misa_000a0210[3];
          acStack_201c[0] = s_nonce_fifo_flush_because_of_misa_000a0210[4];
          acStack_201c[1] = s_nonce_fifo_flush_because_of_misa_000a0210[5];
          acStack_201c[2] = s_nonce_fifo_flush_because_of_misa_000a0210[6];
          acStack_201c[3] = s_nonce_fifo_flush_because_of_misa_000a0210[7];
          acStack_2018[0] = s_nonce_fifo_flush_because_of_misa_000a0210[8];
          acStack_2018[1] = s_nonce_fifo_flush_because_of_misa_000a0210[9];
          acStack_2018[2] = s_nonce_fifo_flush_because_of_misa_000a0210[10];
          acStack_2018[3] = s_nonce_fifo_flush_because_of_misa_000a0210[0xb];
          acStack_2014[0] = s_nonce_fifo_flush_because_of_misa_000a0210[0xc];
          acStack_2014[1] = s_nonce_fifo_flush_because_of_misa_000a0210[0xd];
          acStack_2014[2] = s_nonce_fifo_flush_because_of_misa_000a0210[0xe];
          acStack_2014[3] = s_nonce_fifo_flush_because_of_misa_000a0210[0xf];
          local_2010[0] = s_nonce_fifo_flush_because_of_misa_000a0210[0x10];
          local_2010[1] = s_nonce_fifo_flush_because_of_misa_000a0210[0x11];
          local_2010[2] = s_nonce_fifo_flush_because_of_misa_000a0210[0x12];
          local_2010[3] = s_nonce_fifo_flush_because_of_misa_000a0210[0x13];
          acStack_200c[0] = s_nonce_fifo_flush_because_of_misa_000a0210[0x14];
          acStack_200c[1] = s_nonce_fifo_flush_because_of_misa_000a0210[0x15];
          acStack_200c[2] = s_nonce_fifo_flush_because_of_misa_000a0210[0x16];
          acStack_200c[3] = s_nonce_fifo_flush_because_of_misa_000a0210[0x17];
          acStack_2008[0] = s_nonce_fifo_flush_because_of_misa_000a0210[0x18];
          acStack_2008[1] = s_nonce_fifo_flush_because_of_misa_000a0210[0x19];
          acStack_2008[2] = s_nonce_fifo_flush_because_of_misa_000a0210[0x1a];
          acStack_2008[3] = s_nonce_fifo_flush_because_of_misa_000a0210[0x1b];
          acStack_2004[0] = s_nonce_fifo_flush_because_of_misa_000a0210[0x1c];
          acStack_2004[1] = s_nonce_fifo_flush_because_of_misa_000a0210[0x1d];
          acStack_2004[2] = s_nonce_fifo_flush_because_of_misa_000a0210[0x1e];
          acStack_2004[3] = s_nonce_fifo_flush_because_of_misa_000a0210[0x1f];
          local_2000[0] = s_nonce_fifo_flush_because_of_misa_000a0210[0x20];
          local_2000[1] = s_nonce_fifo_flush_because_of_misa_000a0210[0x21];
          local_2000[2] = s_nonce_fifo_flush_because_of_misa_000a0210[0x22];
          local_2000[3] = s_nonce_fifo_flush_because_of_misa_000a0210[0x23];
          acStack_1ffc[0] = s_nonce_fifo_flush_because_of_misa_000a0210[0x24];
          acStack_1ffc[1] = s_nonce_fifo_flush_because_of_misa_000a0210[0x25];
          acStack_1ffc[2] = s_nonce_fifo_flush_because_of_misa_000a0210[0x26];
          acStack_1ffc[3] = s_nonce_fifo_flush_because_of_misa_000a0210[0x27];
          acStack_1ff8[0] = s_nonce_fifo_flush_because_of_misa_000a0210[0x28];
          acStack_1ff8[1] = s_nonce_fifo_flush_because_of_misa_000a0210[0x29];
          acStack_1ff8[2] = s_nonce_fifo_flush_because_of_misa_000a0210[0x2a];
          acStack_1ff8[3] = s_nonce_fifo_flush_because_of_misa_000a0210[0x2b];
          local_1ff4 = (undefined1)ram0x000a023c;
          FUN_0004948c(3,local_2020,0);
        }
        goto LAB_0003dc84;
      }
    }
  } while( true );
}


