/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class BitCrusherAudioProcessorEditor : public AudioProcessorEditor
{
public:

	typedef AudioProcessorValueTreeState::SliderAttachment SliderAttachment;
	typedef AudioProcessorValueTreeState::ButtonAttachment ButtonAttachment;
	typedef AudioProcessorValueTreeState::ComboBoxAttachment ComboBoxAttachment;
	
	// UI params
	enum
	{
		paramControlHeight = 40,
		paramLabelWidth = 90,
		paramSliderWidth = 300, 
		comboBoxWidth = 100
	};

    BitCrusherAudioProcessorEditor (BitCrusherAudioProcessor&, AudioProcessorValueTreeState&);
    ~BitCrusherAudioProcessorEditor();

	//==============================================================================
    void paint (Graphics&) override;
    void resized() override;

private:
	AudioProcessorValueTreeState& valueTreeState;

	Label 
		bitsLabel,
		rateLabel,
		noiseLabel,
		mixLabel,
		gainLabel,
		noiseTypeLabel,
		multiplyModeLabel;
	
	Slider 
		bitsSlider,
		rateSlider,
		noiseSlider,
		mixSlider,
		gainSlider;
	
	std::unique_ptr<SliderAttachment> 
		bitsSliderAttachment,
		rateSliderAttachment,
		noiseSliderAttachment,
		mixSliderAttachment,
		gainSliderAttachment;
	
	// combo-boxes
	ComboBox noiseTypeMenu, multiplyModeMenu;
	std::unique_ptr<ComboBoxAttachment> noiseTypeMenuAttachment, multiplyModeMenuAttachment;

    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    BitCrusherAudioProcessor& processor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (BitCrusherAudioProcessorEditor)
};
