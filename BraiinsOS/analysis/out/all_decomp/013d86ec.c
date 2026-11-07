// FUN_013d86ec @ 013d86ec size=1008 calls_out=5 calls_in=1
// strings: xdigitinvalid escape sequence found in character classinvalid character class range; the start must be <= the endinvalid range boundary; must be a literalunclosed character classdecimal literal emptydecimal literal invalidhexadecimal literal emptyhexadecimal literal is not a Unicode scalar valueinvalid hexadecimal digitincomplete escape sequence; reached end of pattern prematurelyunrecognized escape sequencedangling flag negation operatorduplicate flagflag negation operator repeatedexpected flag but got end of regexunrecognized flagduplicate capture group nameempty capture group nameinvalid capture group characterunclosed capture group nameunclosed groupunopened groupinvalid repetition count range; the start must be <= the endrepetition quantifier expects a valid decimalunclosed counted repetitionrepetition operator missing expressionspecial word boundary assertion is either unclosed or contains an invalid characterunrecognized special word boundary assertion; valid choices are: start; end; start-half or end-halffound either the beginning of a special word boundary or a bounded repetition on a \b with an opening brace; but no closing braceinvalid Unicode character classlook-around; including look-ahead and look-behind; is not supported' ' | alnum | blank | graph | print

void FUN_013d86ec(uint *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *unaff_r5;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int unaff_r8;
  undefined1 uVar7;
  int iVar8;
  int local_4c;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  
  local_4c = FUN_013d2518(param_2);
  if (local_4c == 0x5b) {
    iVar4 = *param_2;
    unaff_r5 = (uint *)(iVar4 + 0x50);
    local_48 = *unaff_r5;
    uStack_44 = *(uint *)(iVar4 + 0x54);
    uStack_40 = *(uint *)(iVar4 + 0x58);
    iVar1 = FUN_013d2d20(param_2);
    if ((((iVar1 == 0) || (iVar1 = FUN_013d2518(param_2), iVar1 != 0x3a)) ||
        (iVar1 = FUN_013d2d20(param_2), iVar1 == 0)) ||
       ((unaff_r8 = FUN_013d2518(param_2), unaff_r8 == 0x5e &&
        (iVar1 = FUN_013d2d20(param_2), iVar1 == 0)))) {
LAB_013d8838:
      *unaff_r5 = local_48;
      *(uint *)(iVar4 + 0x54) = uStack_44;
      *(uint *)(iVar4 + 0x58) = uStack_40;
      *(undefined1 *)((int)param_1 + 0x19) = 2;
      return;
    }
    uVar5 = *unaff_r5;
    do {
      iVar1 = FUN_013d2518(param_2);
      if (iVar1 == 0x3a) break;
      iVar1 = FUN_013d2d20(param_2);
    } while (iVar1 != 0);
    uVar2 = param_2[2];
    uVar3 = *unaff_r5;
    if (uVar2 == uVar3) goto LAB_013d8838;
    iVar1 = param_2[1];
    if (uVar3 < uVar5) goto LAB_013d8ac8;
    if (uVar5 != 0) {
      if (uVar5 < uVar2) {
        if (*(char *)(iVar1 + uVar5) < -0x40) goto LAB_013d8ac8;
      }
      else if (uVar5 != uVar2) goto LAB_013d8ac8;
    }
    if (uVar3 == 0) {
      iVar8 = 0;
    }
    else {
      if ((uVar2 <= uVar3) || (*(char *)(iVar1 + uVar3) < -0x40)) {
LAB_013d8ac8:
                    /* WARNING: Subroutine does not return */
        FUN_00faa8ac(iVar1,uVar2,uVar5,uVar3,&DAT_01894dd8);
      }
      iVar8 = uVar3 - uVar5;
      uVar2 = uVar2 - uVar3;
    }
    if ((uVar2 < 2) || (*(short *)(iVar1 + uVar3) != 0x5d3a)) goto LAB_013d8838;
    piVar6 = (int *)(iVar1 + uVar5);
    FUN_013d2d20(param_2);
    FUN_013d2d20(param_2);
    if (iVar8 == 4) {
      if (*piVar6 != 0x64726f77) goto LAB_013d8838;
      uVar7 = 0xc;
      goto LAB_013d8a80;
    }
    if (iVar8 != 5) {
      if ((iVar8 != 6) ||
         (iVar1 = thunk_FUN_016dd50a(piVar6,
                                     "xdigitinvalid escape sequence found in character classinvalid character class range, the start must be <= the endinvalid range boundary, must be a literalunclosed character classdecimal literal emptydecimal literal invalidhexadecimal literal emptyhexadecimal literal is not a Unicode scalar valueinvalid hexadecimal digitincomplete escape sequence, reached end of pattern prematurelyunrecognized escape sequencedangling flag negation operatorduplicate flagflag negation operator repeatedexpected flag but got end of regexunrecognized flagduplicate capture group nameempty capture group nameinvalid capture group characterunclosed capture group nameunclosed groupunopened groupinvalid repetition count range, the start must be <= the endrepetition quantifier expects a valid decimalunclosed counted repetitionrepetition operator missing expressionspecial word boundary assertion is either unclosed or contains an invalid characterunrecognized special word boundary assertion, valid choices are: start, end, start-half or end-halffound either the beginning of a special word boundary or a bounded repetition on a \\b with an opening brace, but no closing braceinvalid Unicode character classlook-around, including look-ahead and look-behind, is not supported\' \'"
                                     ,6), iVar1 != 0)) goto LAB_013d8838;
      uVar7 = 0xd;
      goto LAB_013d8a80;
    }
    iVar1 = thunk_FUN_016dd50a(piVar6,"alnum",5);
    if (iVar1 == 0) {
      uVar7 = 0;
      goto LAB_013d8a80;
    }
    iVar1 = thunk_FUN_016dd50a(piVar6,&DAT_003e76bb,5);
    if (iVar1 == 0) {
      uVar7 = 1;
      goto LAB_013d8a80;
    }
    iVar1 = thunk_FUN_016dd50a(piVar6,&DAT_003e939f,5);
    if (iVar1 != 0) {
      iVar1 = thunk_FUN_016dd50a(piVar6,"blank",5);
      if (iVar1 == 0) {
        uVar7 = 3;
      }
      else {
        uVar7 = 5;
        iVar1 = thunk_FUN_016dd50a(piVar6,&DAT_003e8552,5);
        if (iVar1 == 0) {
          uVar7 = 4;
        }
        else {
          iVar1 = thunk_FUN_016dd50a(piVar6,&DAT_0041440d,5);
          if (iVar1 != 0) {
            iVar1 = thunk_FUN_016dd50a(piVar6,"graph",5);
            if (iVar1 == 0) {
              uVar7 = 6;
            }
            else {
              iVar1 = thunk_FUN_016dd50a(piVar6,&DAT_003e800e,5);
              if (iVar1 == 0) {
                uVar7 = 7;
              }
              else {
                iVar1 = thunk_FUN_016dd50a(piVar6,"print",5);
                if (iVar1 == 0) {
                  uVar7 = 8;
                }
                else {
                  iVar1 = thunk_FUN_016dd50a(piVar6,&DAT_003e87db,5);
                  if (iVar1 == 0) {
                    uVar7 = 9;
                  }
                  else {
                    iVar1 = thunk_FUN_016dd50a(piVar6,&DAT_003e836a,5);
                    if (iVar1 == 0) {
                      uVar7 = 10;
                    }
                    else {
                      iVar1 = thunk_FUN_016dd50a(piVar6,&DAT_003e83d8,5);
                      if (iVar1 != 0) goto LAB_013d8838;
                      uVar7 = 0xb;
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_013d8a80;
    }
  }
  else {
    FUN_013ff7ac(&local_4c,&DAT_0056738c,&DAT_01894de8);
  }
  uVar7 = 2;
LAB_013d8a80:
  uVar5 = *unaff_r5;
  uVar3 = unaff_r5[1];
  uVar2 = unaff_r5[2];
  *param_1 = local_48;
  param_1[1] = uStack_44;
  param_1[2] = uStack_40;
  param_1[3] = uVar5;
  param_1[4] = uVar3;
  param_1[5] = uVar2;
  *(undefined1 *)(param_1 + 6) = uVar7;
  *(bool *)((int)param_1 + 0x19) = unaff_r8 == 0x5e;
  return;
}

